class Number:
    def __init__(self):
        self.Value = 0

        print("Enter Your number :")
        self.Value = int(input())
    def ChkPrime(self):
        for i in range(1,self.Value,1):
            if(self.Value <= 1):
                return False
            if((self.Value % i) == 0):
                return False
            else:
                return True
    def ChkPerfect(self):
        sum_factors = 0
        for i in range(1,self.Value,1):
           if((self.Value % i) == 0):
            sum_factors = sum_factors + i 
        return sum_factors == self.Value
    

    def Factors(self):
        factors = []
        for i in range(1,self.Value,1):
            if((self.Value % i) == 0):
                factors.append(i)
        return factors

    def SumFactors(self):
        sum_factors = 0
        for i in range(1,self.Value):
            if((self.Value % i) == 0):
                sum_factors = sum_factors + i
        return sum_factors

def main():
    obj = Number()
    print("Prime number is :", obj.ChkPrime())
    print(obj.ChkPerfect())
    print(obj.Factors())
    print(obj.SumFactors())    
if __name__ == "__main__":
    main()