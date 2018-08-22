cmake_minimum_required(VERSION 3.11.2)
project(leetcode)

set(CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS ON)
set(CMAKE_CXX_STANDARD 11)




# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(src/main DIR_SRCS1)
aux_source_directory(src/test DIR_SRCS2)
set(SRC_LIST ${DIR_SRCS1}  ${DIR_SRCS2})
#message(STATUS ${SRC_LIST})



### 添加include文件
include_directories(${PROJECT_SOURCE_DIR}/include
                    ${PROJECT_SOURCE_DIR}/src/main
                    ${PROJECT_SOURCE_DIR}/src/test
                    )

### 添加lib文件
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib)


add_executable(leetcode ${SRC_LIST})

target_link_libraries(leetcode gtest gtest_main)