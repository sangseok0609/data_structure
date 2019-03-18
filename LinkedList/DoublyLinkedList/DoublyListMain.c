#include <stdio.h>
#include <stdlib.h>
#include "DoublyList.h"

int main() {
	List list;
	int data;
	ListInit(&list);

	for (int i = 1; i <= 8; i++) {
		LInsert(&list, i);
	}

	if (LFirst(&list, &data)) {
		printf("%d ", data);
		while (LNext(&list, &data)) {
			printf("%d ", data);
		}
		while (LPrev(&list, &data)) {
			printf("%d ", data);
		}
	}

	if (LFirst(&list, &data)) {
		if (data % 2 == 0)
			LRemove(&list);
		while (LNext(&list, &data)) {
			if (data % 2 == 0)
				LRemove(&list);
		}
		printf("\n");
	}

	if (LFirst(&list, &data)) {
		printf("%d ", data);
		while (LNext(&list, &data)) {
			printf("%d ", data);
		}
		printf("\n");
	}

	return 0;
}