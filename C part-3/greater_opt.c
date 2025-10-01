#include <stdio.h>

int main() {
    int totalMarks = 420;  
    int numSubjects = 5;   
    int passingGrade = 70;
    
    
    int average = totalMarks/numSubjects;
    
    
    
    
    printf("Has the student passed? %d\n", average>passingGrade);   

    return 0;
}
