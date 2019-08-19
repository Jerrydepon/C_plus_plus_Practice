#include "mathstack.h"

void MathStack::add()
{
	int a, b;
	pop(a);
	pop(b);
	push(a + b);
}

void MathStack::sub()
{
	int a, b;
	pop(a);
	pop(b);
	push(a - b);
}
