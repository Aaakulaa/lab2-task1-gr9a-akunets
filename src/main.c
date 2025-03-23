#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]) {
		if (argc < 2) {
				printf("Использование: %s <строка>\n", argv[0]);
				return 1;
		}

		printf("Введенная строка: %s\n", argv[1]);
		return 0;
}