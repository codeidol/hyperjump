project(launcher)

# Define all source files here
set(PROJECT_SRC
  src/main.cpp
)

# Create shared or static library as per the global settings
if(WIN32)
  add_executable(launcher WIN32 ${PROJECT_SRC})
else()
  add_executable(launcher ${PROJECT_SRC})
endif()
# Specify the include directories to the compiler
target_include_directories(main
PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/launcher/>
  $<INSTALL_INTERFACE:include>
PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/>)

# Specify dependent libraries to the linker
target_link_libraries(launcher
PUBLIC
  foundation
  main
)
  
# Create virtual folders inside Visual Studio and XCode
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${PROJECT_SRC})
