def fake_bin(x):
    # Convert each digit in x to '0' or '1' based on the condition
    result = ''
    for digit in str(x):
        if int(digit) < 5:
            result += '0'
        else:
            result += '1'
    return result

def test_fake_bin():
    # Test case 1: x = '12345'
    assert fake_bin('12345') == '00001'

    # Test case 2: x = '98765'
    assert fake_bin('98765') == '11111'

    # Test case 3: x = '509321'
    assert fake_bin('509321') == '101000'

    # Test case 4: x = '0'
    assert fake_bin('0') == '0'

    # Test case 5: x = '9999'
    assert fake_bin('9999') == '1111'

    print("All tests pass!")

# Run the test function
test_fake_bin()
