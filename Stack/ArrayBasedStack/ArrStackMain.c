#include <stdio.h>
#include "ArrStack.h"

int main() {
	Stack stack;

	StackInit(&stack);

	for (int i = 1; i < 6; i++) {
		SPush(&stack, i);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d",SPop(&stack));
	}


	return 0;
}