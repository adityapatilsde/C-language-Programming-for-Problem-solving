int main() {
    int age; 
    int years_of_education;
    _Bool is_eligible;  // Declaring a boolean variable to store eligibility for movie night
    
    // Input the person's age and years of education completed
    scanf("%d",&age);
    scanf("%d",&years_of_education);
    
    
    // Checking if the person qualifies using logical OR (||)
    is_eligible = (age>=18) || (years_of_education>=5);
    
    
    // Output based on eligibility status
    if (is_eligible) {
        printf("You are eligible for the movie night!\n");
    } else {
        printf("You are not eligible for the movie night.\n");
    }
    
    
    return 0;
    
}
