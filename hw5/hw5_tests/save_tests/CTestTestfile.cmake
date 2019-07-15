# CMake generated Testfile for 
# Source directory: /home/cs104/hw-ykelty/hw5/hw5_tests/save_tests
# Build directory: /home/cs104/hw-ykelty/hw5/hw5_tests/save_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Save.CanSave "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/save_tests/save_tests" "--gtest_filter=Save.CanSave")
add_test(Save.NoChanges "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/save_tests/save_tests" "--gtest_filter=Save.NoChanges")
add_test(Save.AddTweet "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/save_tests/save_tests" "--gtest_filter=Save.AddTweet")
