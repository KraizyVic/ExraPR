#include<stdio.h>
int main(){
    int inp;
    printf("Enter a number to calculate:\n");
    scanf("%d",&inp);

    int binary[20];
    int count = 0;

    while (inp > 0)
    {
        binary[count] = inp %2;
        inp = inp / 2;
        count++;
    }
    int size = count;
    printf("Binary equivalent: ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d",binary[i]);
    }
    
    return 0;
}
