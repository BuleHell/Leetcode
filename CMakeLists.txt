cmake_minimum_required(VERSION 3.11.2)
project(leetcode)

set(CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS ON)
set(CMAKE_CXX_STANDARD 11)




# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(src/main/Source DIR_SRCS1)
aux_source_directory(src/test DIR_SRCS2)
set(SRC_LIST ${DIR_SRCS1}  ${DIR_SRCS2})
message(STATUS "当前的source文件:" ${SRC_LIST})



### 添加include文件
include_directories(${PROJECT_SOURCE_DIR}/include
                    ${PROJECT_SOURCE_DIR}/src/main/Header
                    ${PROJECT_SOURCE_DIR}/src/test
                    )

### 添加lib文件
MESSAGE(STATUS "请编译相应的文件lib")

IF (WIN32)
    MESSAGE(STATUS "当前系统是：windows")
    LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib/win)
ELSEIF (APPLE)
    MESSAGE(STATUS "当前系统是：Apple Mac")
    LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib/mac)
ELSEIF (UNIX)
    LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib/linux)
    MESSAGE(STATUS "当前系统是：UNIX-like OS's. Including aPPLE os x  and CygWin")
ENDIF ()



add_executable(leetcode ${SRC_LIST})

target_link_libraries(leetcode gtest gtest_main)