#include <stdio.h>

void foorbar (int x) {
	int local_array[7];
	local_array[x] = 0;
	}

int main() {
	foorbar(15);
	return 0;
}



