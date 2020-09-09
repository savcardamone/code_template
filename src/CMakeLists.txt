### @brief Create a static library comprising code in src/.
### @author Salvatore Cardamone

add_library( template
   template.cpp
)

# Include OpenCL headers
target_include_directories( template
   PUBLIC ${Template_SOURCE_DIR}/include OpenCL::OpenCL
)

# Link against OpenCL runtime
target_link_libraries( template
   LINK_PUBLIC OpenCL::OpenCL
)
