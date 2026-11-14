#include <iostream>
#include <vector>
#include <memory>


struct PositionPool {
    std::vector<float> x;
    std::vector<float> y;
    std::vector<float> z;
};

struct VelocityPool {
    std::vector<float> dx;
    std::vector<float> dy;
    std::vector<float> dz;
};


struct WorldData {
    PositionPool positions;
    VelocityPool velocities;
};


std::weak_ptr<WorldData> kamera;


void pointer2() {
    auto anaVeri = std::make_shared<WorldData>();
    kamera = anaVeri; 

    std::cout << "Baglanildi!" << std::endl;
} 

int main() {
    pointer2();

    if (kamera.expired()) {
        std::cout << "Kapandi!" << std::endl;
    }

    return 0;
}
