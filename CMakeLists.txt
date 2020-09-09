### @brief Root CMakeLists.txt
### @author Salvatore Cardamone

cmake_minimum_required( VERSION 3.16 )

# We can't set OpenCL as a language so just restrict to C++
project( Template LANGUAGES CXX )

# Find OpenCL and report on which runtime and SDK we'll be using
find_package( OpenCL REQUIRED )
message( STATUS "OpenCL Include Directory found at: ${OpenCL_INCLUDE_DIR}" )
message( STATUS "OpenCL Runtime found at: ${OpenCL_LIBRARY}" )

add_subdirectory(src)
add_subdirectory(test)
