#include <stdio.h>
#include <string.h>
#include "longest.h"

int main() {
	int len;
	int max;
	max = 0;
	printf("프로그램 실행 확인\n");

	while (mygets(line, sizeof(line)) != NULL){
		len = strlen(line);
		
		if (len > max) {
			max = len;
			copy (line, longest);
		}
	}

	if (max > 0)
		printf("%s", longest);
	return 0;
}
