# Chlover CMakeLists
cmake_minimum_required(VERSION 3.20)
project(Chlover)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}:"${CMAKE_CURRENT_LIST_DIR}/cmake")
set(CMAKE_CXX_STANDARD 17)
option(CHLOVER_BUILD_ENGINE "Whether to build the engine or not" ON)
option(CHLOVER_BUILD_EDITOR "Whether to build the editor or not" ON)

if (CHLOVER_BUILD_EDITOR AND NOT CHLOVER_BUILD_ENGINE)
    message(FATAL_ERROR "The engine must be built for the editor to be buildable")
    return
endif()

if (CHLOVER_BUILD_ENGINE)
    add_subdirectory(Engine)
endif()

if (CHLOVER_BUILD_EDITOR)
    # add_subdirectory(Editor)
endif()
