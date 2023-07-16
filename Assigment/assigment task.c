#include <stdio.h>
int isprime(int num)
{
    if (num < 2)
    return 0;
    for (int a= 2; a * a <= num; a++)
    {
     if (num % a == 0)
     return 0;
    }
    return 1; }
    int main() {
    int input;
    while (1)
    {
        printf("Enter a number between 2 and 100: ");
        scanf("%d", &input);
        if (input >= 2 && input <= 100)
 {
            int result = isprime(input); 
		
            if (result == 1)
            printf("The number you have entered is a prime number \n");
            else
            printf("The number you have entered is not a prime number \n");
            break;
         }
 else
 {
            printf(" The number you have entered is out of range. Press 1 to retry ");
            int retry;
            scanf("%d", &retry);
            if (retry != 1)
            break;
 }
}
    return 0;
    	//name zakia Raza
            //father name Haji raza muhmmad 
            // Roll num BS-CS 59
}