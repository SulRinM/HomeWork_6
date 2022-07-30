#pragma once
class Counter
{
public:
	Counter(int i);
	Counter();
	void inc();
	void dec();
	int get();

private:
	int i;
};