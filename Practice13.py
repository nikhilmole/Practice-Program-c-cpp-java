def CheckPer(Per):
    if 100.0 < Per or 0.0 > Per:
        return 1
    elif 35.0 < Per and 50.0 > Per:
        return 2
    elif 50.0 < Per and 80.0 > Per:
        return 3
    elif 80.0 < Per and 100.0 > Per:
        return 4
    else:
        return 5     

def main():
    print("Please enter Your Marks")
    Per = float(input())
    Ret = CheckPer(Per)

    if (Ret == 1):
        print("The input is invalid")
    elif(Ret == 2):
        print("You Pass With Passclass")
    elif (Ret == 3):
        print("You Are PAss With First class")
    elif (Ret == 4):
        print("You Are Pass With  Distinction")    
    else:
        print("You Are Fail")



if __name__ == "__main__":
    main()