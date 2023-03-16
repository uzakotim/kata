def main():
    f = open("./function.h", "w")
    
    name = input("Enter your function name: ")
    output = input("Enter type of output of function: ")
    counter = int(input("Enter the number of inputs: "))
    types = []
    f.write(f"// Function\n// Develop your function here\n/* ----------------------------------------------------- */\n")
    f.close()
    f = open("./function.h", "a")
    f.write(f"{output} {name}(")
    for i in range(counter):
        type = input(f"Enter type of input{i}: ")
        types.append(type)
        if i != (counter - 1):
            f.write(f"{type} input{i},")
        else:
            f.write(f"{type} input{i})\n")
    f.write("{\n")
    f.write(f"\treturn NULL;\n")
    f.write("}\n")
    f.write(f"/* ----------------------------------------------------- */")
    f.close()
    #open and read the file after the appending:
    f = open("function.h", "r")
    print(f.read()) 

    f = open("./handleTest.h", "w")
    f.write("// Handle Test Function\n")
    f.close()
    f = open("./handleTest.h", "a")
    f.write("/* ----------------------------------------------------- */\n")
    f.write("bool err;\n")
    f.write("#define IS_TRUE(x) {if (!(x)) {\\\n")
    f.write("\tstd::cerr<<\"⛔️: \"  \" FAILED\" <<std::endl;\\\n")
    f.write("\terr = true;}}\n\n")
    f.write("/* ----------------------------------------------------- */\n")
    f.write("void handleTest(int test_number,")
    for i in range(counter):
        if i != (counter - 1):
            f.write(f" {types[i]} input{i},")
        else:
            f.write(f" {types[i]} input{i},")
    f.write(f" {output} check)\n")
    f.write("{\n")
    f.write(f"\t{output} result = {name}(")
    for i in range(counter):
        if i != (counter - 1):
            f.write(f"input{i},")
        else:
            f.write(f"input{i});\n")
    f.write("\tstd::cout<<\"TEST \"<<test_number<<std::endl;\n")
    f.write("\tIS_TRUE(result == check);\n")
    f.write("\tif (err==false)\n")
    f.write("\t\tstd::cout<<\"✅: PASSED\\n\";\n")
    f.write("}\n")
    f.write("/* ----------------------------------------------------- */\n")
    f.close()
    
    #open and read the file after the appending:
    f = open("handleTest.h", "r")
    print(f.read()) 

    f = open("./executeTest.h", "w")
    f.write(f"// Function to write commands to produce tests\n")
    f.write(f"// Write your tests here\n")
    f.write("/* ----------------------------------------------------- */\n")
    f.close()
    f = open("./executeTest.h", "a")
    f.write(f"#include \"handleTest.h\"\n")
    f.write(f"void execute_tests()\n")
    f.write("{\n")
    f.write("\t// handleTest(testNumber,")
    for i in range(counter):
        if i != (counter - 1):
            f.write(f"{types[i]} input{i},")
        else:
            f.write(f"{types[i]} input{i}, reference)\n")
    
    f.write(f"\thandleTest(1,")
    print("Please, enter data for the first test...")
    inputs = []
    for i in range(counter):
        inputs.append(input(f"Enter input{i}:"))
        if i != (counter - 1):
            f.write(f"{inputs[i]},")
        else:
            reference = input("Enter reference:")
            f.write(f"{inputs[i]}, {reference});\n")
    f.write("}\n")
    f.write("/* ----------------------------------------------------- */\n")
    f.close()
    
    
    
    f = open("executeTest.h", "r")
    print(f.read()) 

if __name__ == "__main__":
    main()