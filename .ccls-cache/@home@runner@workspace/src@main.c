#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Функция реверса слов
void reverseWords(char *str) {
		char *words[100];
		int count = 0;
		char *token = strtok(str, " ,");
		while (token) {
				words[count++] = token;
				token = strtok(NULL, " ,");
		}
		for (int i = count - 1; i >= 0; i--) {
				printf("%s ", words[i]);
		}
		printf("\n");
}

int main(int argc, char *argv[]) {
		if (argc < 2) {
				printf("Использование: %s <строка>\n", argv[0]);
				return 1;
		}

		char input[100];
		strcpy(input, argv[1]);

		printf("Исходная строка: %s\n", argv[1]);
		printf("Реверс слов: ");
		reverseWords(input);

		return 0;
}