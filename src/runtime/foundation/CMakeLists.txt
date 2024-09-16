project(foundation)

# Define all source files here
set(PROJECT_SRC
  include/foundation/platform.h
  include/foundation/logging.h
  include/foundation/platform/win32/minimal_win32.h
  src/dummy.cpp
  src/logging.cpp
)

# Create shared or static library as per the global settings
if (BUILD_SHARED)
  add_library(foundation SHARED ${PROJECT_SRC})
else ()
  add_library(foundation STATIC ${PROJECT_SRC})
endif ()

# Specify the include directories to the compiler
target_include_directories(foundation
PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/foundation/>
  $<INSTALL_INTERFACE:include>
PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/>)

# Specify dependent libraries to the linker
#target_link_libraries(foundation
#PUBLIC
#  third-party
#)
  
# Create virtual folders inside Visual Studio and XCode
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${PROJECT_SRC})
