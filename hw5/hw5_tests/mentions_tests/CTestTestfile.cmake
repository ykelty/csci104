# CMake generated Testfile for 
# Source directory: /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests
# Build directory: /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Mentions.NoFollowers "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests/mentions_tests" "--gtest_filter=Mentions.NoFollowers")
add_test(Mentions.DirectMention "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests/mentions_tests" "--gtest_filter=Mentions.DirectMention")
add_test(Mentions.NoMentions "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests/mentions_tests" "--gtest_filter=Mentions.NoMentions")
add_test(Mentions.IndirectMentions "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests/mentions_tests" "--gtest_filter=Mentions.IndirectMentions")
add_test(Mentions.UsersFollowEachOther "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests/mentions_tests" "--gtest_filter=Mentions.UsersFollowEachOther")
add_test(Mentions.DirectAndIndirectMentions "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests/mentions_tests" "--gtest_filter=Mentions.DirectAndIndirectMentions")
add_test(Mentions.TweetInMainAndMention "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests/mentions_tests" "--gtest_filter=Mentions.TweetInMainAndMention")
add_test(Mentions.DirectMentionNotFollowingBack "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests/mentions_tests" "--gtest_filter=Mentions.DirectMentionNotFollowingBack")
add_test(Mentions.NoneOfBryansFeeds "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests/mentions_tests" "--gtest_filter=Mentions.NoneOfBryansFeeds")
