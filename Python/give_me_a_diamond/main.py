def diamond(n):
    if n < 0:
        return None
    temp = []
    if n % 2 != 0:
        if n == 1:
            return "*\n"
        else:
            for i in range(n//2 + 1):
                temp.append(" " * (n // 2 - i) + "*" * (2 * i + 1) + "\n")
            result = temp.copy()
            for item in reversed(temp):
                if item != temp[-1]:
                    result.append(item)
            return "".join(result)
    else:
        return None


def test_diamond():
    # Test case 0
    assert diamond(1) == "*\n"
    # Test case 1
    assert diamond(2) == None
    # Test case 2
    assert diamond(5) == "  *\n ***\n*****\n ***\n  *\n"
    # Test case 3
    assert diamond(0) == None
    # Test case 4
    assert diamond(-3) == None
    assert diamond(3) == " *\n***\n *\n"
    print('All tests pass!')


# Run the test function
test_diamond()
