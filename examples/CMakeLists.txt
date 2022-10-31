add_executable(JSONTest JSONTest.cpp)
target_link_libraries(JSONTest PUBLIC IStudio::IStudio)


add_test(NAME MyAwesomeTest COMMAND tests)
