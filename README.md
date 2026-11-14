# ProjeİLK
# 🚀 Custom C++ Data-Oriented Game Engine Core

A lightweight, high-performance **C++14/17** game engine core built from scratch with a focus on **Data-Oriented Design (DOD)**, **Entity Component System (ECS)** architecture, and **low-level Windows memory management**.

Designed to eliminate memory fragmentation, maximize CPU cache locality, and provide deterministic asset/world streaming lifecycles.

---

## ✨ Key Architectural Features

* **Data-Oriented Design (SoA - Struct of Arrays):**
  Components (`Position`, `Velocity`) are stored in contiguous memory pools (`std::vector`) separated by axis (`x, y, z` and `dx, dy, dz`), maximizing L1/L2 CPU cache efficiency and minimizing cache misses during large-scale entity updates.
* **Deterministic Memory & Streaming Lifecycle:**
  Utilizes modern C++ smart pointer semantics (`std::shared_ptr` & `std::weak_ptr`) to manage world data blocks (`WorldData`), enabling safe, leak-free asset streaming and observer validation without dangling references.
* **Platform Abstraction & Core Types (`CoreTypes.h`):**
  Zero-overhead compile-time constants (`constexpr`), strongly-typed state rules (`enum class`), and clean Win32 API abstractions (`VirtualAlloc` ready) for direct OS memory control.
* **Strict Separation of Data & Logic:**
  Pure data layers (`.h`) are completely decoupled from execution systems (`.cpp`), laying a scalable foundation for multi-threaded job systems and 3D rendering pipelines (DirectX / Vulkan).

---

## 📂 Project Structure

    # Compile-time constants (constexpr), memory rules (enum class), and engine macros
      # SoA (Struct of Arrays) component pools and smart pointer streaming references
        # Entry point, system execution, and lifecycle verification


---

## 🛠️ Tech Stack & Requirements

* **Language:** C++14 / C++17 / C++11
* **Platform:** Windows (Win32 API / Windows 10 & 11 SDK)
* **IDE / Compiler:** Visual Studio 2022 / 2026 (MSVC x64)

---

## 🚀 Getting Started

1. Clone the repository or open the `.sln` solution file in **Visual Studio**.
2. Set the build configuration to **`Release`** (or **`Debug`**) and platform to **`x64`**.
3. Ensure your C++ Language Standard is set to **ISO C++14** or **ISO C++17** (`Project Properties -> C/C++ -> Language`).
4. Build and run the project using **`Ctrl + F5`**.

---

## 🗺️ Roadmap

- [x] Core compile-time constants and type-safe memory rules (`CoreTypes.h`)
- [x] SoA (Struct of Arrays) Component Pools (`Position`, `Velocity`)
- [x] Smart pointer world data ownership & `weak_ptr` streaming observer
- [ ] Custom OS-level Linear / Arena Allocator (`VirtualAlloc`)
- [ ] Real-time `DeltaTime` game loop & decoupled `MovementSystem`
- [ ] DirectX 11 / 12 3D Viewport integration

---

## 📄 License

This project is open-source and available under the **MIT License**.
