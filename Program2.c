// Extend the program to provide additional comments based on the grade using a switch-case statement.
// For example, if the grade is 'A', then print 'Excellent work!". If the grade is 'B', then print "Well done".
// If the grade is "C", then print 'CGood job'. If the grade is 'D', then print 'You passed, but you could do better.
//  And if the grade is 'F', then print "Sorry, you failed'.

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

    return 0;
}