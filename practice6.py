import threading

def EvenFactorSum(iNo):
    ESum = 0
    print("Even Factors:")
    for i in range(1, iNo + 1):
        if iNo % i == 0 and i % 2 == 0:
            ESum += i
            print(i)
    print("Sum of Even Factors:", ESum)

def OddFactorSum(iNo):
    FSum = 0
    print("Odd Factors:")
    for i in range(1, iNo + 1):
        if iNo % i == 0 and i % 2 != 0:
            FSum += i
            print(i)
    print("Sum of Odd Factors:", FSum)

def main():
    print("Enter Number:")
    iValue = int(input())

    evenfactor = threading.Thread(target=EvenFactorSum, args=(iValue,))
    oddfactor = threading.Thread(target=OddFactorSum, args=(iValue,))

    evenfactor.start()
    oddfactor.start()

    evenfactor.join()
    oddfactor.join()

    print("Exit from main")

if __name__ == "__main__":
    main()
