//Lojik değer kullanma:
/*
C dilinde doğru olarak dönen değerin 1 olma zorunluluğu yoktur. Buna güvenerek
kod yazılmaz. Bu duruma unspecified behaviour denir.

*/

int main() {
	int c1, c2;

	printf("iki karakter giriniz \n ");
	c1 = getchar();
	c2 = getchar();
	// ikiside rakam karakteri ise ya da ikiside rakam karakteri değil ise
	if (isdigit(c1) == isdigit(c2))
		// burada problem şu c de bool olarak doğru ise 1 dönecek diye bir garanti yok.
		// unspecified behavior, c de bundan kaçınmak için lojil değerleri kullan
		printf("ikisi de rakam karakteri veya ikiside degil...");
	//Dogru olan aşağıdaki gibi lojik değerleri kullanmak
	//   if( !!isdigit(c1) ==  !!isdigit(c2) )

}