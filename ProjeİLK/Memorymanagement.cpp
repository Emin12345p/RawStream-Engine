#include <iostream>
#include <memory>

void pointer2() {

	auto p2 = std::make_unique<int>(10);

	std::cout << " Pointer 2 Açıldı,Birazdan kapanacak kopyalanamaz" << std::endl;



	auto p3 = std::move(p2);

	std::cout << "Sonuc: " << p3 << std::endl;

}
int main () {
	pointer2();
	return 0;
	
}


