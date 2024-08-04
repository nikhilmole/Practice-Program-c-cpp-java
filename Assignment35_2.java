class Demo implements Cloneable 
{
    public int no;
    public String str;

    public Demo(String name, int marks)
    {
        this.str = name;
        this.no = marks;
    }

    public void fun() 
    {
        System.out.println("Inside Fun");
    }

    public Object clone() throws CloneNotSupportedException 
    {
        return super.clone();
    }
}

class Assignment35_2 {
    public static void main(String args[]) 
    {
        try {
            Demo dobj = new Demo("Swapnil", 87);
            System.out.println("Name of student : " + dobj.str);
            System.out.println("Marks of student : " + dobj.no);

            Demo dobjX = (Demo) dobj.clone();
            System.out.println("Name of student : " + dobjX.str);
            System.out.println("Marks of student : " + dobjX.no);
        } catch (Exception obj) 
        {
            
        }
    }
}
