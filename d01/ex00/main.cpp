#include "Pony.cpp"

void	ponyOnTheHeap(void) {
	Pony *pony = new Pony("On the heap");
	delete pony;
}

void	ponyOnTheStack(void) {
	Pony pony = Pony("On the stack");
	return;
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
}