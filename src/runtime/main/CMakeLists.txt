project(main)

# Define all source files here
set(PROJECT_SRC
  include/main/main.h
)
if(WIN32)
  set(PROJECT_SRC ${PROJECT_SRC} src/main_win32.cpp)
elseif(APPLE)
  set(PROJECT_SRC ${PROJECT_SRC} src/main_mac.cpp)
elseif(UNIX)
  set(PROJECT_SRC ${PROJECT_SRC} src/main_linux.cpp)
else()
  set(PROJECT_SRC ${PROJECT_SRC} src/main_generic.cpp)
endif()


# Create shared or static library as per the global settings
#if (BUILD_SHARED)
#  add_library(main SHARED ${PROJECT_SRC})
#else ()
# TODO: For some reason we can only link libmain statically
#       Let's investigate why
  add_library(main STATIC ${PROJECT_SRC})
#endif ()

# Specify the include directories to the compiler
target_include_directories(main
PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/main/>
  $<INSTALL_INTERFACE:include>
PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/>)

# Specify dependent libraries to the linker
target_link_libraries(main
PUBLIC
  foundation
)
  
# Create virtual folders inside Visual Studio and XCode
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${PROJECT_SRC})
