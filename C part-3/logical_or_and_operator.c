
int main() {
    int grade = 75;             
    int extracurricular = 1; 
    
  
    int isEligible = (80>=grade)||(70>=grade)&&(extracurricular);

    // Print the result: 1 for eligible, 0 for not eligible
    printf("Is the student eligible for scholarship? %d\n", isEligible);


    return 0;
}
