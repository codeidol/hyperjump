cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

#
# Package definition
#

project(engine)

#
# Package configuration
#

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(SetupPackageOptions)
include(SetupBuildConfig)
include(SetupOutputDirectories)
include(SetupCompiler)

#
# Modules
#

# add_subdirectory(path/to/module)
add_subdirectory(src/runtime/foundation)
add_subdirectory(src/runtime/main)
add_subdirectory(src/launcher)
