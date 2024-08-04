import java.util.Scanner;

class Assi28Q7 
{
    public static void main(String A[]) 
    {
        int iValue = 0;
        int iNo = 0;
        int iMax = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements");
        iValue = sobj.nextInt();

        int Arr[] = new int[iValue]; 

        System.out.println("Enter the numbers");
        for (iNo = 0; iNo < iValue; iNo++) 
        { 
            Arr[iNo] = sobj.nextInt();
        }

        iMax = Arr[0];
        for (int i = 1; i < iValue; i++) 
        { 
            if (iMax < Arr[i])
            {
                iMax = Arr[i];
            }
        }
        System.out.println("Greatest number in Array is: " + iMax);
    }
}
