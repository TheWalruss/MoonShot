cmake_minimum_required (VERSION 3.9)
project (MoonShot)

set (MoonShot_VERSION_MAJOR 0)
set (MoonShot_VERSION_MINOR 0)

configure_file (
        "${PROJECT_SOURCE_DIR}/MoonShotCMakeConfig.h.in" 
        "${PROJECT_SOURCE_DIR}/MoonShotCMakeConfig.h"
        )

include_directories ("${PROJECT_SOURCE_DIR}/image")
add_subdirectory (image)

add_executable (trim trim.cxx)
target_link_libraries (trim image)

install (TARGETS trim DESTINATION bin)

