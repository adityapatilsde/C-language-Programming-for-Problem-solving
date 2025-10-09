#include <stdio.h>
#include <string.h>

int main() {
    
    char movie[50] = "Inception";
    char separator[] = " - ";
    char releaseYear[] = "2010";
    strcat(movie,separator);
    strcat(movie,releaseYear);
    int title = strlen(movie);

   // write your code here
   printf("Movie Info: %s\n",movie);
   printf("Title Length: %d characters",title);

    return 0;
}