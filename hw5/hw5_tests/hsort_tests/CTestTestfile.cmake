# CMake generated Testfile for 
# Source directory: /home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests
# Build directory: /home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(HSortTest.SortEmpty "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.SortEmpty")
add_test(HSortTest.SortSingleElement "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.SortSingleElement")
add_test(HSortTest.SortTwoElements_InOrder "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.SortTwoElements_InOrder")
add_test(HSortTest.SortTwoElements_OutOfOrder "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.SortTwoElements_OutOfOrder")
add_test(HSortTest.SortThreeElements_10_20_30 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.SortThreeElements_10_20_30")
add_test(HSortTest.SortThreeElements_10_30_20 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.SortThreeElements_10_30_20")
add_test(HSortTest.SortThreeElements_20_10_30 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.SortThreeElements_20_10_30")
add_test(HSortTest.SortThreeElements_20_30_10 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.SortThreeElements_20_30_10")
add_test(HSortTest.SortThreeElements_30_10_20 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.SortThreeElements_30_10_20")
add_test(HSortTest.SortThreeElements_30_20_10 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.SortThreeElements_30_20_10")
add_test(HSortTest.SortThreeElements_Greater "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.SortThreeElements_Greater")
add_test(HSortTest.SortStrings "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.SortStrings")
add_test(HSortTest.SortPairs "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.SortPairs")
add_test(HSortTest.Stress10RandomElements_Less "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.Stress10RandomElements_Less")
add_test(HSortTest.Stress100RandomElements_Less "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.Stress100RandomElements_Less")
add_test(HSortTest.Stress1000RandomElements_Less "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.Stress1000RandomElements_Less")
add_test(HSortTest.Stress10000RandomElements_Less "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_tests" "--gtest_filter=HSortTest.Stress10000RandomElements_Less")
add_test(HeapSortRuntime.Runtime "/home/cs104/hw-ykelty/hw5/hw5_tests/hsort_tests/hsort_runtime_tests" "--gtest_filter=HeapSortRuntime.Runtime")
