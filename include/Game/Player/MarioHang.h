#pragma once

class MarioState;

class MarioHang : public MarioState {
public:
    MarioHang(MarioActor *pMarioActor);
    
    u16 _12;
    u16 _14;
    u16 _16;
    u16 _18;
    u8 _1A;
    u8 _1B;
    u8 _1C;
    u8 _1D;
    bool _1E;
};