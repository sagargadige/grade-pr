#include<stdio.h>
int main()
{
    int per;
    char grade;

    printf("Enter Your PER:");
    scanf("%d",&per);

    if(per<0 || per>100){
        printf("please Enter the valid PER between 0 to 100");
        return 1;
    }

    grade = per>=80 ? 'A':
            per>=70 ? 'B':
            per>=60 ? 'C':
            per>=33 ? 'D':'F';
    printf("Your Grade is:%c",grade);

    switch(grade)
    {
        case 'A':
        printf("\n Excellent Work!");
        break;
        case 'B':
        printf("\n Well Done");
        break;
        case 'C':
        printf("\n Good Job");
        break;
        case 'D':
        printf("\n You pass but you could do better");
        break;
        default:
        printf("\n Sorry You Failed");
    }
    if(grade=='A' || grade=='B' || grade=='C' || grade=='D'){
        printf("\nCongratulation! You are eligible for the next round");
    }
    else{
        printf("\nPlease try again Next Time");
    }
    return 0;
}