#include <stdio.h>
#include <stdlib.h>
#include "ListStack.h"

int main() {
	Stack stack;
	StackInit(&stack);

	for (int i = 1; i < 6; i++) {
		SPush(&stack, i);
	}
	while (!IsEmpty(&stack)) {
		printf("%d ", SPop(&stack));
	}

	return 0;
}