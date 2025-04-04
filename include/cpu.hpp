#pragma once

#include <fstream>
#include <iostream>

#include "registers.hpp"
#include "memory.hpp"

class Cpu {
    int opcode;
    Registers regs;
    Memory memory;

    public:
        int loadRom(char* const path);
        void decode();
};