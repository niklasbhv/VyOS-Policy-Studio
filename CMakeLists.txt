cmake_minimum_required(VERSION 3.22.1)
project(vyos_policy_studio)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

set(CMAKE_AUTOUIC_SEARCH_PATHS
    ${CMAKE_CURRENT_SOURCE_DIR}/ui
)

qt_add_executable(${PROJECT_NAME}
        src/app/main.cpp
        src/app/main.h
        src/app/MainWindow.cpp
        src/app/MainWindow.h
)

add_subdirectory(src/vyos)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)
