include <stdio.h>

int main() {
    int totalMarks = 435;       
    int numberOfSubjects = 5;   
    float averageMarks;  
    
   --numberOfSubjects;
    averageMarks =(float)totalMarks/numberOfSubjects;
    printf("Average marks: %f\n",averageMarks);

    return 0;
}
