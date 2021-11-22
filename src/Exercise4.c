/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	//Your codes here
	int n = strlen(str);
	int k=0, i;
	int count=0;
	while (str[0] == ' ') {
		for (i=k; i<n-k; i++) {
			str[i] = str[i+1];
		}
		count++;
	}
	for (i=0; i<n-count; i++) {
		if (str[i] == ' ' && str[i+1] == ' ' || str[i] == ' ' && str[i-1] == ' ') {
			for (int j=i; j<n-count; j++)
				str[j] = str[j+1];
			count++;
		}
	}
	for (i=0; i<n-count; i++) 
		printf("%c", str[i]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}