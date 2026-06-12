# Set the project name
project(vyos)

# Add a library with the above sources
add_library(${PROJECT_NAME}
        #model/firewall/bridge.cpp
        #model/firewall/bridge.h
        #model/firewall/common.h
        #model/firewall/firewall.cpp
        #model/firewall/firewall.h
        model/firewall/group.cpp
        model/firewall/group.h
)

# add dependencies
include(../../cmake/CPM.cmake)

CPMAddPackage("gh:nlohmann/json@3.11.3")

#target_include_directories(${PROJECT_NAME}
#PUBLIC ${PROJECT_SOURCE_DIR}/include
#)

target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json)
