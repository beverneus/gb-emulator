#include "cpu.hpp"

int Cpu::loadRom(char* const path) {
    std::ifstream rom(path, std::ios::binary);
    if (rom.fail()) {
        std::cout << "Failed to read rom at: " << path << std::endl;
        return 1;
    }

    uint16_t address = 0;
    uint8_t byte = 0;
    while(!rom.eof()) {
        rom.read(reinterpret_cast<char*>(&byte), 1);
        memory.write(address, byte);
        address++;
    }
    rom.close();
    return 0;
}

void Cpu::decode() {
    uint8_t block = (opcode & 0b11000000) >> 6; // 2 most significant bits
    uint8_t group = opcode & 0b00001111;        // 4 least significant bits
    switch(group) { // switch based on group
        case 0b00:
            switch (group) { // switch based on group: instructions that behave mostly the same, only differing in what registers/memory is affected
                case 0b0000: // NOP: No OPeration
                    break;
            }
            break;
        case 0b01:
            break;
        case 0b10:
            break;
        case 0b11:
            break;
    }
}