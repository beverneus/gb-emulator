#include <cstdint>

struct Registers {
    uint8_t A, B, C, D, E, H, L, F;
    uint16_t SP, PC;

    Registers();

    uint16_t readPair(uint8_t high, uint8_t low);
    void setPair(uint8_t* high, uint8_t* low, uint16_t value);

    void setAF(uint16_t value);
    uint16_t readAF();
    void setBC(uint16_t value);
    uint16_t readBC();
    void setDE(uint16_t value);
    uint16_t readDE();
    void setHL(uint16_t value);
    uint16_t readHL();
};