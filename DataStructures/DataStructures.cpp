// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"
#include "stack.h"

using namespace std;

int main()
{
	Stack* stack = create();

	for (int i = 0;i < 10; i++) {
		Node* node = createNewNode(i + 1);
		_sleep(1000);
		push(node, stack);
	}

	printStack(stack);

	for (int i = 0;i < 10; i++) {
		_sleep(1000);
		Node* node = pop(stack);
		printStack(stack);
		free(node);
	}

	while (1) {

	}
}
