/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	int n = strlen(str);
	int shortest=99, longest=1;
	int indexl, indexs;
	int count=0;
	for (int i=0; i<n; i++) {
		if (str[i]==' ') {
			if (count<shortest) {
				indexs = i;
				shortest = count;
				}
			if (count>longest) {
				longest = count;
				indexl = i;
			}
			count = 0;
		}
		else count++;

	}
	printf("%d", indexl);
	printf("Shortest word: ");
	for (int i=indexs-shortest; i<=indexs-1; i++) 
		printf("%c", str[i]);
	printf("\nLongest word: ");
	for (int i=indexl-longest; i<=indexl-1; i++) 
		printf("%c", str[i]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
