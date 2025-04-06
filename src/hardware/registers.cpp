#include "registers.hpp"

Registers::Registers() : A(0), B(0), C(0), D(0), E(0), H(0), L(0), F(0) {}

uint16_t Registers::readPair(uint8_t high, uint8_t low){
    uint16_t value = (high << 8) | low;
    return value;
}

void Registers::setPair(uint8_t* high, uint8_t* low, uint16_t value) {
    *high = value >> 8;
    *low = value & 0x00FF;
}

uint16_t Registers::readAF() {return readPair(A, F);};
void Registers::setAF(uint16_t value) {setPair(&A, &F, value);}

uint16_t Registers::readBC() {return readPair(B, C);};
void Registers::setBC(uint16_t value) {setPair(&B, &C, value);}


uint16_t Registers::readDE() {return readPair(D, E);};
void Registers::setDE(uint16_t value) {setPair(&D, &E, value);}

uint16_t Registers::readHL() {return readPair(H, L);};
void Registers::setHL(uint16_t value) {setPair(&H, &L, value);}

