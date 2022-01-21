project(ChloverEngine)

add_library(ChloverEngine
    src/Chlover.cpp src/chlover/application/Application.cpp
)
target_include_directories(ChloverEngine PUBLIC include)