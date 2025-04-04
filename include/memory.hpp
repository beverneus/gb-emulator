#pragma once

#include <cstdint>
#include <iostream>

class Memory {
    uint8_t memory[0xFFFF];

    public:
        Memory();
        uint8_t read(uint16_t address);
        void write(uint16_t address, uint8_t value);
};