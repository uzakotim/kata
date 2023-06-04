# Function to write commands to produce tests
# Write your tests here
# * ----------------------------------------------------- *
from function import first_non_repeating_letter
from handleTest import handleTest


def execute_tests():
    assert first_non_repeating_letter('a') == ''
    assert first_non_repeating_letter('a') == 'a'
    assert first_non_repeating_letter('aa') == ''
    assert first_non_repeating_letter('stress') == 't'
    assert first_non_repeating_letter('moonmen') == 'e'
    assert first_non_repeating_letter('ABBA') == ''
    assert first_non_repeating_letter('Aba') == 'b'
    # handleTest(testNumber, input0, reference)
    # -----------------------------------------------------
    # error = handleTest(1,'stress', 't')
    # if error == True:
    # return True
    # -----------------------------------------------------
    # error = handleTest(2,'moonmen', 'e')
    # if error == True:
    # return True
    # -----------------------------------------------------
    # error = handleTest(3,'sTreSS', 'T')
    # if error == True:
    # return True
    # -----------------------------------------------------
    # return False
# * ----------------------------------------------------- *
