# Handle Test Function
#* ----------------------------------------------------- *
from function import first_non_repeating_letter
#* ----------------------------------------------------- *
def handleTest(test_number, input0, check):
	result = first_non_repeating_letter( input0)
	print("TEST ", test_number,":",sep='')
	if (result!=check):
		print("⛔️: ","FAILED",sep='')
		error = True
	else:
		print("✅: PASSED")
		error = False
	return error
#* ----------------------------------------------------- *
