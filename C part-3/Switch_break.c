include <stdio.h>
#include <string.h>

int main() {
	char greetings[100];
	scanf("%s",greetings);
	
	int code;
	
	if (strcmp(greetings, "hello") == 0) {
	  code = 1;
	} else if (strcmp(greetings, "hi") == 0) {
	  code = 2;
	} else if (strcmp(greetings, "hey") == 0) {
	  code = 3;
	} else {
	  code = 0;
	}
	
	switch (code) {
	  case 1 :
	  printf("Hello there!\n");
	  case 2 :
	  printf("Hey,What'S up?\n");
	  default :
	  printf("Nice to meet you.\n");
	  break;
	}
	return 0;
}

