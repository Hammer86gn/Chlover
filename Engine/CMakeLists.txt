project(ChloverEngine)

add_library(ChloverEngine
    src/Chlover.cpp src/chlover/core/application/Application.cpp
)
target_include_directories(ChloverEngine PUBLIC include)