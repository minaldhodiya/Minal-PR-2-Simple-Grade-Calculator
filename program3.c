//Further, extend the program to check, eligibility for the next level based on the grade wing an if-else statement. 
//Print Congratulations! You are cligible for the next level if the grade is from 'A' to 'D'. Print"
//Please try again nest time' if the grade is "F"

#include <stdio.h>

int main()
{
    // Decler Score Variable and Gread
    int score;
    char grade;

    // Geting Uesr Score
    printf("Enter Your Score :- ");
    scanf("%d", &score);

    // write a logic for Enter more than 100 score
    if (score < 0 || score > 100)
    {
        printf("Please Enter Valide Score");
    }

    //write a logic for chaking gread useing ternary
     grade =  (score >= 90) ? 'A' :
              (score >= 80) ? 'B' :
              (score >= 70) ? 'C' :
              (score >= 50) ? 'D' : 'F';
            
    printf("Your Gread is : %c", grade);

    // write a logic for Chaking gread 
    switch (grade)
    {
    case 'A':
        printf(" Excellent work!");
        break;
    case 'B':
        printf(" Well done");
        break;
    case 'C':
        printf(" Good job");
        break;
      case 'D':
        printf(" You passed, but you could do better.");
        break;
    default:
        printf(" Sorry, you failed");
        break;
    }

    //write the logic for level
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
       printf(" Congratulations! You are cligible for the next level");
    }
    else
    {
        printf(" Please try again nest time");
    }    
    
    return 0;
}