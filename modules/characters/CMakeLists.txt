SET(LIBRARY_NAME characters)

SET(LIBRARY_SRCS
    character.cpp
)

SET(LIBRARY_HEADERS
    include/character.h
)

add_library(${LIBRARY_NAME} STATIC
    ${LIBRARY_SRCS}
    ${LIBRARY_HEADERS}
)

target_include_directories(${LIBRARY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
