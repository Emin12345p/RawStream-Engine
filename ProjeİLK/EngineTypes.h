#pragma once
#include <cstdint>
#include <cstddef> 


constexpr nullptr_t NO_WINDOW = nullptr;


constexpr size_t KILOBYTE = 1024ULL;
constexpr size_t MEGABYTE = 1024ULL * KILOBYTE;
constexpr size_t GIGABYTE = 1024ULL * MEGABYTE;

enum class MemoryStatus : uint8_t {
	Empty,
	Locked,
	Space
};



#define  COMPONENT
#define SYSTEM
