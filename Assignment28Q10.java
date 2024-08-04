import java.util.Scanner;

class Assignment28Q10 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0;
        int iSize = 0;

        System.out.println("Enter Array Size :");
        iSize = sobj.nextInt();

        System.out.println("Enter Number of Rows: ");
        iRow = sobj.nextInt();

        int Jagged[][] = new int[iRow][];

        for (int i = 0; i < iRow; i++) {
            System.out.println("Enter Size of Row " + (i + 1) + ":");
            int rowSize = sobj.nextInt();
            Jagged[i] = new int[rowSize];

            System.out.println("Enter elements for Row " + (i + 1) + ":");
            for (int j = 0; j < rowSize; j++) {
                Jagged[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Jagged Array:");
        for (int i = 0; i < Jagged.length; i++) {
            for (int j = 0; j < Jagged[i].length; j++) {
                System.out.print(Jagged[i][j] + "\t");
            }
            System.out.println();
        }
    }
}
