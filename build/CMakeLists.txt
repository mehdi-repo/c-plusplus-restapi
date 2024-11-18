cmake_minimum_required(VERSION 3.10)
project(SQLiteRestAPI)

set(CMAKE_CXX_STANDARD 17)

include_directories(include jsoncpp)

add_executable(SQLiteRestAPI src/main.cpp src/Database.cpp src/User.cpp src/Address.cpp src/RestAPI.cpp)

target_link_libraries(SQLiteRestAPI sqlite3)