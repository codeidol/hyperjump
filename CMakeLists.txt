cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

#
# Package definition
#

set(PACKAGE_VERSION_MAJOR "0")
set(PACKAGE_VERSION_MINOR "0")
set(PACKAGE_VERSION_PATCH "0")
set(PACKAGE_VERSION_TWEAK "1")
set(PACKAGE_VERSION "${PACKAGE_VERSION_MAJOR}.${PACKAGE_VERSION_MINOR}.${PACKAGE_VERSION_PATCH}.${PACKAGE_VERSION_TWEAK}")
set(PACKAGE_SHORT_NAME "engine")
set(PACKAGE_FULL_NAME "${PACKAGE_SHORT_NAME} v${PACKAGE_VERSION_MAJOR}.${PACKAGE_VERSION_MINOR}")
project("${PACKAGE_SHORT_NAME}" VERSION "${PACKAGE_VERSION}")

#
# Package configuration
#

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(GNUInstallDirs)

include(SetupPackageOptions)
include(SetupBuildConfig)
include(SetupOutputDirectories)
include(SetupCompiler)

#
# Modules
#

# add_subdirectory(path/to/module)