# Agregar Google Test como dependencia
include(FetchContent)

FetchContent_Declare(googletest URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip)

FetchContent_MakeAvailable(googletest)

# Habilitar testing en el proyecto
enable_testing()

# Añadir tests
add_executable(tests
    unit/story.test.cpp
    unit/character.test.cpp
)
target_link_libraries(tests PRIVATE gtest gtest_main story characters)