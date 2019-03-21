#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char randChar();

int main(int argc, char **argv) {
	time_t t; srand((unsigned) time(&t));
	int n=atoi(argv[1]);
	int cn=0; char c;
	int i = 0;
	while(EOF !=(c=getchar())) {
		if (i == 0) putchar(c) ;
		i++;
		if(i > cn){
			i = 0;
			cn++;
		}
		if (cn>n-1) cn=0;
	}
	return 0;
}
