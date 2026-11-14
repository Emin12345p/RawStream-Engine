#include <iostream>
#include <memory>

void pointer2() {

	auto p2 = std::make_unique<int>(10);

	std::cout << " Pointer 2 Açıldı,Birazdan kapanacak kopyalanamaz" << std::endl;


	int sonuc = (*p2) * (*p2);

	std::cout << "Sonuc: " << sonuc << std::endl;

}
int main () {
	pointer2();
	return 0;
	
}


