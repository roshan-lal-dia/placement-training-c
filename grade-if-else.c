#include <stdio.h>

int main() {
    char grade;
    int marks = 0;
    //can be improved using nested if and goto
    //goto example - tinyurl.com/goto-state

    printf("Enter your marks:");
    scanf("%d", &marks);

    if (marks <=100 && marks >=90){
        grade = 'S';
        printf("Grade : %c", grade);
    }else if (marks <=89 && marks >=80)
    {
        grade = 'A';
        printf("Grade : %c", grade);

    }else if (marks <=79 && marks >=70)
    {
        grade = 'B';
        printf("Grade : %c", grade);

    }else if (marks <=69 && marks >=60)
    {
        grade = 'C';
        printf("Grade : %c", grade);

    }else if (marks <=59 && marks >=50)
    {
        grade = 'D';
        printf("Grade : %c", grade);

    }else{
        grade = 'E';
        printf("Grade : %c", grade);
        
    }
    
}