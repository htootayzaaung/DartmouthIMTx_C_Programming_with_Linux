#include <stdio.h>

void changeAge(int *ageAddr);

//Write your function prototype here

int main(void){
    int age;
    int *ageAddr = &age;
    scanf("%d", ageAddr);
    printf("Your current age is %d.\n", age);

    //Write your function call here
    changeAge(&age);

    printf("Your new age will be %d!\n", age);
    return 0;
}


//Write your function here
void changeAge(int *age)
{
    if (*age >= 21)
    {
        *age = *age - 10;
    }
    else if (*age <= 20)
    {
        *age = *age * 2;
    }
}