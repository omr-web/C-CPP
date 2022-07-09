#include <stdio.h>
// #define NDEBUG assert kütüphanesi tanımlanmadan önce NDEBUG tanımlanırsa assert macrosu çalışmaz
#include <assert.h>

/*
int main() {
	double x = -1.0;
	assert(x >= 0.0);
	printf("Dogru");
	return 0;
}

*/

int main() {
	assert(("there are five lights", 2 + 2 == 5));
}
