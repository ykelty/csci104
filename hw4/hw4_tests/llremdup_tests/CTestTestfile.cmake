# CMake generated Testfile for 
# Source directory: /home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests
# Build directory: /home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Duplicates.Empty "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Duplicates.Empty")
add_test(Duplicates.OneValueNoDuplicate "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Duplicates.OneValueNoDuplicate")
add_test(Duplicates.OneValueOneDuplicate "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Duplicates.OneValueOneDuplicate")
add_test(Duplicates.TwoValuesNoDuplicate "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Duplicates.TwoValuesNoDuplicate")
add_test(Duplicates.TwoValueOneDuplicateA "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Duplicates.TwoValueOneDuplicateA")
add_test(Duplicates.TwoValueOneDuplicateB "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Duplicates.TwoValueOneDuplicateB")
add_test(Duplicates.ThreeValuesDuplicateStart "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Duplicates.ThreeValuesDuplicateStart")
add_test(Duplicates.ThreeValuesDuplicateMid "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Duplicates.ThreeValuesDuplicateMid")
add_test(Duplicates.ThreeValuesDuplicateEnd "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Duplicates.ThreeValuesDuplicateEnd")
add_test(Duplicates.TenNumbers "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Duplicates.TenNumbers")
add_test(Duplicates.ManyDuplicateSequences "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Duplicates.ManyDuplicateSequences")
add_test(Duplicates.DuplicatesMixed "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Duplicates.DuplicatesMixed")
add_test(Duplicates.RandomStress500x10ele "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Duplicates.RandomStress500x10ele")
add_test(Concatenate.BothEmpty "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Concatenate.BothEmpty")
add_test(Concatenate.FirstEmptyOneVal "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Concatenate.FirstEmptyOneVal")
add_test(Concatenate.SecondEmptyOneVal "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Concatenate.SecondEmptyOneVal")
add_test(Concatenate.BothNonEmptyOneVal "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Concatenate.BothNonEmptyOneVal")
add_test(Concatenate.FirstEmptyMultipleVals "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Concatenate.FirstEmptyMultipleVals")
add_test(Concatenate.SecondEmptyMultipleVals "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Concatenate.SecondEmptyMultipleVals")
add_test(Concatenate.BothNonEmptyMultipleVals "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw4/hw4_tests/llremdup_tests/llremdup_tests" "--gtest_filter=Concatenate.BothNonEmptyMultipleVals")
