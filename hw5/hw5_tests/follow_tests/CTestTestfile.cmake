# CMake generated Testfile for 
# Source directory: /home/cs104/hw-ykelty/hw5/hw5_tests/follow_tests
# Build directory: /home/cs104/hw-ykelty/hw5/hw5_tests/follow_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Follow.CanFollow "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/follow_tests/follow_tests" "--gtest_filter=Follow.CanFollow")
add_test(Follow.NoFollowing "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/follow_tests/follow_tests" "--gtest_filter=Follow.NoFollowing")
add_test(Follow.HasFollowing "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/follow_tests/follow_tests" "--gtest_filter=Follow.HasFollowing")
add_test(Follow.NoFollowingSave "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/follow_tests/follow_tests" "--gtest_filter=Follow.NoFollowingSave")
add_test(Follow.HasFollowingSave "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/follow_tests/follow_tests" "--gtest_filter=Follow.HasFollowingSave")
