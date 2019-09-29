#include<stdio.h>
#include<conio.h>
struct student
{
    char name[50],phone[10];
    int roll;
   // long int phone;
    
} s;
int main()
{
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter phone: ");
    scanf("%s", &s.phone);
    printf("Displaying Information:\n");
    printf("Name: ");
    puts(s.name);
    printf("Roll number: %d\n",s.roll);
    printf("phone: %s\n", s.phone);
    return 0;
}

