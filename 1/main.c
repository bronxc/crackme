#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char input[12];
	char pass[12];
	fputs("Please input name: ", stdout);
	fgets(input, sizeof input, stdin);
	fputs("Please input pass: ", stdout);
	fgets(pass, sizeof pass, stdin);
	srand(1337);
	const unsigned char table[8] = {173,135,131,121,110,119,187,143};
	int i;
    for (i = 0; i < sizeof input; i++) {
        input[i] ^= table[i % 8];
    }
	bool accepted = sizeof input == sizeof pass;
    for (i = 0; accepted && i < sizeof input; i++) {
        accepted &= input[i] == pass[i];
    }
	if (accepted)
		fputs("Correct!\n", stdout);
	else
		fputs("Incorrect\n", stdout);
	return 0;
}
