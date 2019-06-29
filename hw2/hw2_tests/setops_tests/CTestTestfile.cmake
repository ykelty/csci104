# CMake generated Testfile for 
# Source directory: /home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests
# Build directory: /home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(SetOpsTestIntersection.TwoEmptySets "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestIntersection.TwoEmptySets")
add_test(SetOpsTestIntersection.FirstSetEmpty "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestIntersection.FirstSetEmpty")
add_test(SetOpsTestIntersection.SecondSetEmpty "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestIntersection.SecondSetEmpty")
add_test(SetOpsTestIntersection.NonIntersectingSets "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestIntersection.NonIntersectingSets")
add_test(SetOpsTestIntersection.PartiallyIntersectingSets "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestIntersection.PartiallyIntersectingSets")
add_test(SetOpsTestIntersection.IdenticalNonEmptySets "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestIntersection.IdenticalNonEmptySets")
add_test(SetOpsTestUnion.TwoEmptySets "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestUnion.TwoEmptySets")
add_test(SetOpsTestUnion.FirstSetEmpty "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestUnion.FirstSetEmpty")
add_test(SetOpsTestUnion.SecondSetEmpty "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestUnion.SecondSetEmpty")
add_test(SetOpsTestUnion.NoElementsInCommon "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestUnion.NoElementsInCommon")
add_test(SetOpsTestUnion.SomeElementsInCommon "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestUnion.SomeElementsInCommon")
add_test(SetOpsTestUnion.IdenticalNonEmptySets "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestUnion.IdenticalNonEmptySets")
add_test(SetOpsTestDifference.TwoEmptySets "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestDifference.TwoEmptySets")
add_test(SetOpsTestDifference.FirstSetEmpty "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestDifference.FirstSetEmpty")
add_test(SetOpsTestDifference.SecondSetEmpty "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestDifference.SecondSetEmpty")
add_test(SetOpsTestDifference.IdenticalNonEmptySets "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestDifference.IdenticalNonEmptySets")
add_test(SetOpsTestDifference.FirstSubsetOfSecond "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestDifference.FirstSubsetOfSecond")
add_test(SetOpsTestDifference.SecondSubsetOfFirst "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestDifference.SecondSubsetOfFirst")
add_test(SetOpsTestDifference.NoElementsInCommon "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_tests" "--gtest_filter=SetOpsTestDifference.NoElementsInCommon")
add_test(SetOpsRuntime.Intersection "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_runtime_tests" "--gtest_filter=SetOpsRuntime.Intersection")
add_test(SetOpsRuntime.Union "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_runtime_tests" "--gtest_filter=SetOpsRuntime.Union")
add_test(SetOpsRuntime.Difference "/home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/setops_runtime_tests" "--gtest_filter=SetOpsRuntime.Difference")
