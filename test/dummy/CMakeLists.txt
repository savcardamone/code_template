### @brief Unit test case compilation.
### @author Salvatore Cardamone

# Create the unit test executable
add_executable( dummy
   ../main.cpp
   dummy.cpp
)

# Include the interfaces to libraries we're linking against
target_include_directories( dummy
   PUBLIC ${Template_SOURCE_DIR}/include GTest::GTest
)

# Include the libraries we're linking against
target_link_libraries( dummy
   LINK_PUBLIC template GTest::GTest
)
