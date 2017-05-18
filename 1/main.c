#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char input[9];
	fputs("Please input password (9 chars): ", stdout);
	fgets(input, sizeof input, stdin);
	if (strcmp("hunter23", input) == 0)
		fputs("Correct!\n", stdout);
	else
		fputs("Incorrect\n", stdout);
	return 0;
}
