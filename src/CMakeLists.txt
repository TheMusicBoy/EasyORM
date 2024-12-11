set(INCROOT "${PROJECT_SOURCE_DIR}/include")
set(SRCROOT "${PROJECT_SOURCE_DIR}/src")

set(SRC
    ${INCROOT}/args.h

    ${SRCROOT}/main.cpp
    ${SRCROOT}/args.cpp
)

if (NOT "${SRC}" STREQUAL "")
    message(STATUS "Building main executable...")
    add_executable(main ${SRC})
    target_link_libraries(main PUBLIC
        tmb_logs
        argparse
        pqxx
        config
        ${Protobuf_LIBRARIES}
    )
    target_include_directories(main PUBLIC
        ${INCROOT}
        ${PROJECT_SOURCE_DIR}/proto/generated
        ${Protobuf_INCLUDE_DIRS})
    set_target_properties(main PROPERTIES LINKER_LANGUAGE CXX)
else()
    message(WARNING "Main executable is not built")
endif()
