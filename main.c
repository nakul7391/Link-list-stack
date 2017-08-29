/*Implementation of stack to store strings*/
#include <stdio.h>
#include "stack.h"

int main(int argc, char *argv[] )
{
		Slist_t *top = NULL;
		char *str;
		printf("PUSH hello, hi , how are you\n");
		push(&top,"hello");
		push(&top,"hi");
		push(&top,"how are you");

		peek(&top,&str);
		printf("PEEK %s\n",str);

		pop(&top,&str);
		printf("POP %s\n",str);

		pop(&top,&str);
		printf("POP %s\n",str);
		pop(&top,&str);
		printf("POP %s\n",str);

		if (pop(&top,&str) == Empty)
		printf("Stack is empty\n");
		
		return 0;
}
