#!/usr/bin/python3

import cs_grading
import cmake_problem
import setting
import os

source_dir = os.path.dirname(os.path.realpath(__file__))

RESULT_DIR = 'results/' # where test results are stored
GRADER_CONFIG = '../grader.txt'
RUBRIC_GENERAL = os.path.join(source_dir, 'rubric', 'general.config')
RUBRIC_SETOPS = os.path.join(source_dir, 'rubric', 'setops.config')
RUBRIC_MAJORS = os.path.join(source_dir, 'rubric', 'majors.config')
#RUBRIC_LOGIN = os.path.join(source_dir, 'rubric', 'login.config')
#RUBRIC_HEAP = os.path.join(source_dir, 'rubric', 'heap.config')
#RUBRIC_RECS = os.path.join(source_dir, 'rubric', 'recs.config')

GRADE_REPORT_DIR = './'

HOMEWORK = cs_grading.Homework(
    2,
    RESULT_DIR,
    False,
    detailed_results=setting.DETAILED_RESULT,
    compile_flags=setting.COMPILE_FLAGS,
    logging_level=setting.LOGGING_LEVEL,
)

#P1 = cs_grading.Problem(HOMEWORK, 1, 'login', 15)
#P2 = cs_grading.Problem(HOMEWORK, 2, 'heap', 25)
#P3 = cs_grading.Problem(HOMEWORK, 3, 'recs', 40)
P5 = cs_grading.Problem(HOMEWORK, 5, 'setops', 12)
P6 = cs_grading.Problem(HOMEWORK, 6, 'majors', 22)

for problem, rubric in [(P5, RUBRIC_SETOPS), (P6, RUBRIC_MAJORS)]:#[(P1, RUBRIC_LOGIN), (P2, RUBRIC_HEAP), (P3, RUBRIC_RECS)]:
    problem.generate_results(
        cmake_problem.cmake_problem,
        True,
        timeout=0,)
    if setting.GENERATE_GRADE_REPORT:
        problem.grade_problem(RUBRIC_GENERAL, rubric)
    if setting.OPEN_RESULT:
        problem.open_result(text_editor=setting.TEXT_EDITOR)


GRADER = cs_grading.Grader(GRADER_CONFIG, setting.LOGGING_LEVEL)
cs_grading.generate_grade_report(HOMEWORK, GRADER, GRADE_REPORT_DIR, overwrite=True, logging_level=setting.LOGGING_LEVEL)
