import java.util.Scanner;

class Assignment29_9 {
    public static void main(String[] args)
     {
        int maxLength = 0;
        Scanner sobj = new Scanner(System.in);
        String input;
        
        System.out.println("Enter your Word:");
        input = sobj.nextLine();
        
        
        String[] words = input.split(" ");
        
    
        for (String word : words) {
            if (word.length() > maxLength) {
                maxLength = word.length();
            }
        }
        
        System.out.println("The length of the longest word is: " + maxLength);
    }
}
