#include<stdio.h>
struct Demo
{
    int standard; 
    int marks; 
    char division; 
    int sallary; 
};
int main()
{
    struct Demo Amit;
    struct Demo Pooja;

    Amit.standard = 12;
    Amit.marks = 92.99;
    Amit.division = 'A';
    Amit.sallary = 52000;

    Pooja.standard = 11;
    Pooja.marks = 94.99;
    Pooja.division = 'D';
    Pooja.sallary = 62000;

    printf("Amit Standard is :%d\n",Amit.standard);
    printf("Amit Marks is :%f\n",Amit.marks);
    printf("Amit Division is :%c\n",Amit.division);
    printf("Amit Sallary is :%d\n",Amit.sallary);

    printf("Pooja Standard is :%d\n",Pooja.standard);
    printf("Pooja Marks is :%d\n",Pooja.marks);
    printf("Pooja Division is :%c\n",Pooja.division);
    printf("Pooja sallary is :%d\n",Pooja.sallary);
    

    return 0;
}