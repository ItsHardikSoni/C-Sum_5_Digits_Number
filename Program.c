// If 5 digit number enter through the keyboard.
// Write a program to calculate sum of 5 digits number.


#include<stdio.h>
#include<conio.h>
int main()
{
    int d1,d2,d3,d4,d5,sum;
    printf("Enter a five digit number: ");
    scanf("%d%d%d%d%d",&d1, &d2, &d3, &d4, &d5);
    sum=d1+d2+d3+d4+d5;
    printf("\n The sum of the digis is: %d",sum);
    return 0;
}
