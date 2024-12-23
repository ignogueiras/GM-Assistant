SET(LIBRARY_NAME locations)

SET(LIBRARY_SRCS
    location.cpp
)

SET(LIBRARY_HEADERS
    include/location.h
)

add_library(${LIBRARY_NAME} STATIC
    ${LIBRARY_SRCS}
    ${LIBRARY_HEADERS}
)

target_include_directories(${LIBRARY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)