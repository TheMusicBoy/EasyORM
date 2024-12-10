set(SRCROOT "${PROJECT_SOURCE_DIR}/tests")

include(GoogleTest)
enable_testing()

function(test_libs)
    set(TEST_LIBS "${ARGN}" CACHE INTERNAL "TEST_LIBS")
endfunction()

function(add_test NAME TARGET)
    add_executable(${NAME} "${SRCROOT}/${TARGET}")
    target_link_libraries(${NAME} PUBLIC ${TEST_LIBS} GTest::gtest_main)
    target_include_directories(${NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
    gtest_discover_tests(${NAME})
endfunction()

# Tests


