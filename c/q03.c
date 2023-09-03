// write a program to check whether if a person is eligible for voting or not in if else

#include <stdio.h>

int main()
{

    int age;
    printf("enter your age sir/ma'am: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("you are eligible for voting!!");
    }
    else
    {
        printf("you are not eligible for voting!!! bhaaaaap\n");
    }

    return 0;
}
