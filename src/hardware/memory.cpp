#include "memory.hpp"

Memory::Memory() : memory({0}) {}

uint8_t Memory::read(uint16_t address) {
    if (0x0000 <= address <= 0xFFFF) {
        return memory[address];
    } else {
        std::cerr << "Memory address out of range: " << address << std::endl; 
        return 0;
    }
}

void Memory::write(uint16_t address, uint8_t value) {
    if (!0x0000 <= address <= 0xFFFF) {
        std::cerr << "Memory address out of range: " << address << std::endl; 
        return;
    }
    memory[address] = value;
}
