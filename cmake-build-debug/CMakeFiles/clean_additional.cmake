# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\simplyTranslate_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\simplyTranslate_autogen.dir\\ParseCache.txt"
  "simplyTranslate_autogen"
  )
endif()
