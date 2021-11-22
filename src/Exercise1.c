/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void readnum(int n, int x) {
	switch (n/x) {
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6:
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("eight");
			break;
		case 9:
			printf("nine");
	}
}
void Ex1(int n){
	//Your codes here
	if (n>=1000) {
		readnum(n, 1000);
		printf(" thousand ");
		n = n - (n/1000)*1000;
	}
	if (n>=100) {
		readnum(n, 100);
		printf(" hundred ");
		n = n - (n/100)*100;
	}
	if (n>=20) {
		switch (n/10) {
			case 2:
				printf("twen");
				break;
			case 3:
				printf("thir");
				break;
			case 5:
				printf("fif");
				break;
			default:
				readnum(n, 10);
		}
		printf("ty ");
		n = n - (n/10)*10;
	}
	readnum(n, 1);
	if (n>=10 && n<=19) 
	switch (n) {
		case 10:
			printf("ten");
			break;
		case 11:
			printf("eleven");
			break;
		case 12:
			printf("twelve");
			break;
		case 13:
			printf("thirteen");
			break;
		case 14:
			printf("fourteen");
			break;
		case 15:
			printf("fifteen");
			break;
		case 16:
			printf("sixteen");
			break;
		case 17:
			printf("seventeen");
			break;
		case 18:
			printf("eighteen");
			break;
		default:
			printf("nineteen");
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
