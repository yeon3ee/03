#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	
	printf("input Alphabet: ");
	scanf("%c",&c);
	
	printf("input Alphabet: %c\n", c);
	
	char nextc = c+1;
	printf("next Alphabet : %c\n", nextc);
	return 0;
}
