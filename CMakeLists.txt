cmake_minimum_required(VERSION 3.26)
project(Snake LANGUAGES CXX)

include(FetchContent)

# Défini ou récupérer la librairie terminal_ctrl (commit fixé pour avoir la même version)
FetchContent_Declare(
    terminal_ctrl
    GIT_REPOSITORY https://github.com/dsmtE/terminal_ctrl
    GIT_TAG a911d289c86f812f02de5e16b4d39992b1d117cd
)

# Clone terminal_ctrl puis ajoute son CMakeLists.txt au projet
FetchContent_MakeAvailable(terminal_ctrl)

add_executable(snake src/main.cpp)
target_compile_features(snake PRIVATE cxx_std_20)

# terminal_ctrl
target_link_libraries(snake PRIVATE terminal_ctrl)