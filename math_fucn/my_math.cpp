#include "my_math.h"

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int mul(int x, int y) {
	return x * y;
}

int _div(int x, int y) {
	return x / y;
}

int deg(int x, int y) {
	int z = 1;
	for (int i = 0; i < y; i++) {
		z = z * x;
	}
	return z;
}