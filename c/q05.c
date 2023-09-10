// Write a C program to print your name, date of birth, and mobile number.
// Expected Output:
// Name   : Alexandra Abramov
// DOB    : July 14, 1975
// Mobile : 99-9999999999
#include <stdio.h>
#include <string.h>

int main()
{

    char name = "sahil nayak";
    int d = 28;
    int y = 2004;
    int no = 42338749243;
    printf("Name : %s", name);
    printf("DOB  : dec %d , %d", d, y);
    printf("Mobile : %d", no);

    return 0;
}