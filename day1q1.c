//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include<stdio.h>
int main(){
    int numone;
    printf("ENTER NUMONE; ");
    scanf("%d",&numone);
    int numtwo;
    printf("ENTER NUMTWO; ");
    scanf("%d",&numtwo);
    printf("sum= %d\n",numone+numtwo);
    return 0;
}