# Function to write commands to produce tests
# Write your tests here
#* ----------------------------------------------------- *
from handleTest import handleTest
def execute_tests():
	#handleTest(testNumber, input0, reference)
	# -----------------------------------------------------
	error = handleTest(1,'stress', 't')
	if error == True:
		return True
	# -----------------------------------------------------
	error = handleTest(2,'moonmen', 'e')
	if error == True:
		return True
	# -----------------------------------------------------
	error = handleTest(3,'sTreSS', 'T')
	if error == True:
		return True
	# -----------------------------------------------------
	return False
#* ----------------------------------------------------- *
