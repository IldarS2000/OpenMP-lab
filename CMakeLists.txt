cmake_minimum_required(VERSION 3.9)
project(OpenMP-lab)

find_package(OpenMP)
if (OPENMP_FOUND)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
endif ()


add_executable(task1 task1.cpp)
target_link_libraries(task1 PUBLIC OpenMP::OpenMP_CXX)

add_executable(task2 task2.cpp)
target_link_libraries(task2 PUBLIC OpenMP::OpenMP_CXX)

add_executable(task3 task3.cpp)
target_link_libraries(task3 PUBLIC OpenMP::OpenMP_CXX)

add_executable(task4 task4.cpp)
target_link_libraries(task4 PUBLIC OpenMP::OpenMP_CXX)

add_executable(task5 task5.cpp)
target_link_libraries(task5 PUBLIC OpenMP::OpenMP_CXX)

add_executable(task6 task6.cpp)
target_link_libraries(task6 PUBLIC OpenMP::OpenMP_CXX)

add_executable(task7 task7.cpp)
target_link_libraries(task7 PUBLIC OpenMP::OpenMP_CXX)

add_executable(task8 task8.cpp)
target_link_libraries(task8 PUBLIC OpenMP::OpenMP_CXX)

add_executable(task9 task9.cpp)
target_link_libraries(task9 PUBLIC OpenMP::OpenMP_CXX)

add_executable(task10 task10.cpp)
target_link_libraries(task10 PUBLIC OpenMP::OpenMP_CXX)

add_executable(task11 task11.cpp)
target_link_libraries(task11 PUBLIC OpenMP::OpenMP_CXX)

add_executable(task12 task12.cpp)
target_link_libraries(task12 PUBLIC OpenMP::OpenMP_CXX)

add_executable(task13 task13.cpp)
target_link_libraries(task13 PUBLIC OpenMP::OpenMP_CXX)