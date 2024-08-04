import java.util.Scanner;

class Assignment28Q8 {
    public static void main(String[] args) 
    {
        int iValue = 0;
        int iNo = 0;
        int iAve = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements:");
        iValue = sobj.nextInt();

        int Arr[] = new int[iValue];

        System.out.println("Enter the numbers:");
        for (iNo = 0; iNo < iValue; iNo++) 
        {
            Arr[iNo] = sobj.nextInt();
        }
        for (int i = 0; i < iValue; i++) 
        {
            iAve = iAve + Arr[i];
        }
        iAve = iAve / iValue;
        System.out.println("The average of all numbers is: " + iAve);
    }
}
