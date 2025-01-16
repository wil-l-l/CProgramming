#include <stdio.h>

int getDifference(int number1, int number2){
    return number1-number2;
}

int main(void){
    
    int course_id = 2271;
    int student_id = 20295;
    int difference = getDifference(course_id,student_id);

    printf("Wil\n");
    printf("Course ID: %d\n", course_id);
    printf("Student ID: %d\n", student_id);
    printf("COurse ID - Student ID is: %d", difference);

    return 0;
}

/* Git Notes 

// Green color means its an untracked file, it was never added to the git
// git status will show all untracked files

*/