include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0
)
# For Windows: prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

add_executable(unit_tests test_math_utils.cpp)
target_link_libraries(unit_tests PRIVATE cpp_template gtest_main)

include(GoogleTest)
gtest_discover_tests(unit_tests)
