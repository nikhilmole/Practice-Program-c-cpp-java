def CheckRange(No1):
    if 40 <= No1 and 70 >= No1:
        return 1
    else:
        return 2


def main():
    print("Plaease Enter Your marks")
    Num = int(input())
    Name = 0

    Name = CheckRange(Num)

    if (Name == 1):
        print("The Number is in range")
    else:
        print("The Number is not in range ")


if __name__ == "__main__":
    main()