void Clear_ınput_Buffer(void) {
	// clear the buffer
	int c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}


int main() {
	char ch1, ch2;
	printf("Input the first character:\n"); // Line 1
	scanf("%c", &ch1);
	Clear_ınput_Buffer();
	printf("Input the second character:\n"); // Line 2
	ch2 = getchar();
	printf("ch1=%c, ASCII kod karsiligi = %d\n", ch1, ch1);
	printf("ch2=%c, ASCII kod karsiligi = %d\n", ch2, ch2);
	system("PAUSE");
	return 0;
}