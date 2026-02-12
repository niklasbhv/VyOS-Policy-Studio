cmake_minimum_required(VERSION 3.22.1)
project(vyos_policy_studio)

set(CMAKE_CXX_STANDARD 17)

add_executable(vyos_policy_studio 
        src/main.cpp
        src/main.h
        # VyOS Firewall Model
        src/model/types.h
        src/model/firewall/group.cpp
        src/model/firewall/group.h)

# Add dependencies
include(cmake/CPM.cmake)
CPMAddPackage("gh:nlohmann/json@3.12.0")

target_link_libraries(vyos_policy_studio nlohmann_json::nlohmann_json)