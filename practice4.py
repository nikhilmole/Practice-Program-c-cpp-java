def gun(Value1 ,Value2):
    print("inside fun")
    Ans = 0
    Ans = Value1 + Value2
    return Ans

def sun(Value1 ,Value2):
    print("inside sun")
    Ans = Value1 - Value2
    return Ans

def gun(Value1 ,Value2):
    print("inside gun")
    Ans = Value1 * Value2
    return Ans

def mun(Value1 ,Value2):
    print("inside mun")
    Ans = Value1 / Value2
    return Ans

ret = gun(11,21)
print("Addition is :",ret)

ret1 = sun(5,5)
print("substraction is :" ,ret1)

ret2 = gun(11,21)
print("Multiplication is :",ret)

ret3 = gun(11,21)
print("Division is :",ret)