include(FetchContent)

# -- Google Test --

FetchContent_Declare(googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip)

FetchContent_MakeAvailable(googletest)
FetchContent_GetProperties(googletest)

if (NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
    add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

# -- Fmt --

# add_subdirectory(fmt)

FetchContent_Declare(fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG master
)

FetchContent_MakeAvailable(fmt)
FetchContent_GetProperties(fmt)

if (NOT fmt_POPULATED)
    FetchContent_Populate(fmt)
    add_subdirectory(${fmt_SOURCE_DIR} ${fmt_BINARY_DIR})
endif()

# -- Tmb logs --

FetchContent_Declare(tmb_logs
  GIT_REPOSITORY https://github.com/TheMusicBoy/tmb_logs.git
  GIT_TAG master
)

FetchContent_MakeAvailable(tmb_logs)
FetchContent_GetProperties(tmb_logs)

if (NOT tmb_logs_POPULATED)
    FetchContent_Populate(tmb_logs)
    add_subdirectory(${tmb_logs_SOURCE_DIR} ${tmb_logs_BINARY_DIR})
endif()

# -- Argparse --

FetchContent_Declare(argparse
  GIT_REPOSITORY https://github.com/p-ranav/argparse.git
  GIT_TAG master
)

FetchContent_MakeAvailable(argparse)
FetchContent_GetProperties(argparse)

if (NOT argparse_POPULATED)
    FetchContent_Populate(argparse)
    add_subdirectory(${argparse_SOURCE_DIR} ${argparse_BINARY_DIR})
endif()
