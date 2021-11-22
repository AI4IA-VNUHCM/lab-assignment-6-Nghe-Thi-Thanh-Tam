/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex2(int n, char *str[]){
	//Your codes here
	char *temp[99];
	int e;
	for (int i=0; i<n-1; i++) 
		for (int j=i+1; j<n; j++) {
			e = (strlen(str[i])>strlen(str[j]) ? strlen(str[j]) : strlen(str[i]));
			for (int k=0; k<e; k++) {
				if (str[i][k] > str[j][k]) {
					temp[0] = str[i];
					str[i] = str[j];
					str[j] = temp[0];
					break;
				}
				if (str[i][k] < str[j][k]) break;
			}
		}
	
	for (int i=0; i<n; i++)
		printf("%s ", str[i]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex2(argc, testcase);
	
	return 0;
}
