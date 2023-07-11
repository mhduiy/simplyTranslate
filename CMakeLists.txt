CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

project(simplyTranslate CXX)
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS Gui  REQUIRED)
find_package(Qt5 COMPONENTS Core  REQUIRED)
find_package(Qt5 COMPONENTS Network  REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/src/tools)
include_directories(${CMAKE_SOURCE_DIR}/src/widget)

include_directories(C:\\Qt\\Qt5.14.2\\5.14.2\\mingw73_64\\include)

file(GLOB_RECURSE SRC src/tools/*.cpp src/widget/*.cpp src/main.cpp)
file(GLOB_RECURSE HEAD src/tools/*.h src/widget/*.h)
file(GLOB_RECURSE FORM src/widget/*.ui)

set(RES_LIST
        ${CMAKE_SOURCE_DIR}/src/res/res.qrc
        )

add_executable(${PROJECT_NAME} ${SRC} ${HEAD} ${FORM} ${RES_LIST})

message(${SRC} ${HEAD} ${FORM})

target_link_libraries(${PROJECT_NAME} PRIVATE
        Qt5::Widgets
        Qt5::Gui
        Qt5::Core
        Qt5::Network
        ) # 链接库