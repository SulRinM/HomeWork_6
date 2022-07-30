#include "class_counter.h"

Counter::Counter(int i)
{
	this->i = i;
}
Counter::Counter()
{
	this->i = 1;
}
void Counter::inc()
{
	i++;
}
void Counter::dec()
{
	i--;
}
int Counter::get()
{
	return i;
}