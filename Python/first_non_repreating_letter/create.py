def main():
    f = open("./function.py", "w")
    
    name = input("Enter your function name: ")
    counter = int(input("Enter the number of inputs: "))
    f.write(f"# Function\n# Develop your function here\n#* ----------------------------------------------------- *\n")
    f.close()
    f = open("./function.py", "a")
    f.write(f"def {name}(")
    for i in range(counter):
        if i != (counter - 1):
            f.write(f" input{i},")
        else:
            f.write(f" input{i}):")
    f.write(f"\n\treturn 0\n")
    f.write(f"#* ----------------------------------------------------- *")
    f.close()
    #open and read the file after the appending:
    f = open("function.py", "r")
    print(f.read()) 

    f = open("./handleTest.py", "w")
    f.write(f"# Handle Test Function\n#* ----------------------------------------------------- *\nfrom function import {name}\n#* ----------------------------------------------------- *\ndef handleTest(test_number,")
    f = open("./handleTest.py", "a")
    
    for i in range(counter):
        f.write(f" input{i},")
    f.write(" check):\n")
    
    f.write(f"\tresult = {name}(")
    for i in range(counter):
        if i != (counter - 1):
            f.write(f" input{i},")
        else:
            f.write(f" input{i})\n")
    f.write(f"\tprint(\"TEST \", test_number,\":\",sep='')\n")
    f.write(f"\tif (result!=check):\n")
    f.write(f"\t\tprint(\"⛔️: \",\"FAILED\",sep='')\n")
    f.write(f"\t\terror = True\n")
    f.write(f"\telse:\n")
    f.write(f"\t\tprint(\"✅: PASSED\")\n")
    f.write(f"\t\terror = False\n")
    f.write(f"\treturn error\n")
    f.write(f"#* ----------------------------------------------------- *\n")
    
    f.close()
    
    #open and read the file after the appending:
    f = open("handleTest.py", "r")
    print(f.read()) 

    f = open("./executeTest.py", "w")
    f.write(f"# Function to write commands to produce tests\n")
    f.write(f"# Write your tests here\n")
    f.write(f"#* ----------------------------------------------------- *\n")
    f.close()
    f = open("./executeTest.py", "a")
    f.write(f"from handleTest import handleTest\n")
    f.write(f"def execute_tests():\n")
    f.write(f"\t#handleTest(testNumber,")
    for i in range(counter):
        if i != (counter - 1):
            f.write(f" input{i},")
        else:
            f.write(f" input{i}, reference)\n")
    #open and read the file after the appending:
    f.write(f"\t# -----------------------------------------------------\n")
    f.write(f"\terror = handleTest(1,")
    inputs = []
    for i in range(counter):
        inputs.append(input(f"Enter input{i}:"))
        if i != (counter - 1):
            f.write(f"{inputs[i]},")
        else:
            reference = input("Enter reference:")
            f.write(f"{inputs[i]}, {reference})\n")
    f.write(f"\tif error == True:\n")
    f.write(f"\t\treturn True\n")
    f.write(f"\t# -----------------------------------------------------\n")
    f.write(f"\treturn False\n")
    f.write(f"#* ----------------------------------------------------- *\n")

    f.close()
    
    
    
    f = open("executeTest.py", "r")
    print(f.read()) 

if __name__ == "__main__":
    main()