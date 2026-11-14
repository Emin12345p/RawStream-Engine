#pragma once
#include <vector>
#include <memory>
#include <cstdint>


using ID = uint32_t;


struct Position {
    std::vector<float> x;
    std::vector<float> y;
    std::vector<float> z;
};

struct Velocity {
    std::vector<float> dx;
    std::vector<float> dy;
    std::vector<float> dz;
};




auto anaVeri = std::make_shared<WorldData>();


std::weak_ptr<WorldData> kamera = anaVeri;
