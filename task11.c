#include <stdio.h>
struct student
{
    char title[20],aut[20],gen[20];
} s;
int main()
{
    printf("Enter information:\n");
    printf("Enter title: ");
    scanf("%s", s.title);
    printf("Enter author title: ");
    scanf("%s", &s.aut);
    printf("Enter genre: ");
    scanf("%s", &s.gen);
    printf("/nDisplaying Information:\n");
    printf("title: ");
    puts(s.title);
    printf("author name: %s\n",s.aut);
    printf("genre: %s\n", s.gen);
    return 0;
}

