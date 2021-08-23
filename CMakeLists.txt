# CMAKE VERSION
cmake_minimum_required(VERSION 3.8...3.21)


# PROJECT STATEMENT
project(
    TopLog 
    VERSION 1.0
    LANGUAGES CXX)

# CMAKE_ VARIABLES


# FIND PACKAGES
FIND_PACKAGE(SFML 2.5 COMPONENTS audio graphics window system REQUIRED)


# EXECUTABLE
add_executable(${PROJECT_NAME}
    src/main.cpp )

# Define supported C++ Version
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_EXTENSIONS OFF)

# LINKING
target_link_libraries(${PROJECT_NAME}
    PUBLIC sfml-graphics
    PUBLIC sfml-audio
    PUBLIC sfml-window
    PUBLIC sfml-system
)

