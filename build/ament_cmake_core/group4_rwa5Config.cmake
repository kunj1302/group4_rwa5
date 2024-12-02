# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_group4_rwa5_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED group4_rwa5_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(group4_rwa5_FOUND FALSE)
  elseif(NOT group4_rwa5_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(group4_rwa5_FOUND FALSE)
  endif()
  return()
endif()
set(_group4_rwa5_CONFIG_INCLUDED TRUE)

# output package information
if(NOT group4_rwa5_FIND_QUIETLY)
  message(STATUS "Found group4_rwa5: 0.1.0 (${group4_rwa5_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'group4_rwa5' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${group4_rwa5_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(group4_rwa5_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${group4_rwa5_DIR}/${_extra}")
endforeach()
