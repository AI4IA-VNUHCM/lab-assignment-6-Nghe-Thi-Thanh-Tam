/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex5(char *str){
	//Your codes here
	int n = strlen(str);
	int check;
	if (n%2!=0) printf("Invalid!");
	else {
		check=1;
		for (int i=0; i<n/2; i++) {
			if (str[i] == '{' && str[n-i-1] != '}') check = 0;
			if (str[i] == '(' && str[n-i-1] != ')') check = 0;
			if (str[i] == '[' && str[n-i-1] != ']') check = 0;
		}
		printf("%s", check? "Valid!" : "Invalid!");
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
