cmake_minimum_required(VERSION 3.16)

project(cpp_template
    VERSION 1.0.0
    DESCRIPTION "A modern C++ project template with CMake, GoogleTest and CI"
    LANGUAGES CXX)

# ---- Global settings ----
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Export compile_commands.json for clangd / clang-tidy
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Put all binaries in a single output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# ---- Library target ----
add_library(cpp_template
    src/math_utils.cpp
)

target_include_directories(cpp_template
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# ---- Application executable ----
add_executable(cpp_template_app src/main.cpp)
target_link_libraries(cpp_template_app PRIVATE cpp_template)

# ---- Examples ----
add_executable(demo examples/demo.cpp)
target_link_libraries(demo PRIVATE cpp_template)

# ---- Tests ----
option(BUILD_TESTING "Build the unit tests" ON)
if(BUILD_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif()

# ---- Install rules ----
include(GNUInstallDirs)
install(TARGETS cpp_template cpp_template_app
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
