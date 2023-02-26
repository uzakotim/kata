# Function
# Develop your function here
#* ----------------------------------------------------- *
def first_non_repeating_letter( input0):
	copy_string = input0.lower()
	lst = [x for x in input0 if copy_string.count(x.lower()) == 1]
	if len(lst) == 0:
		return ''
	else:
		return lst[0]
#* ----------------------------------------------------- *