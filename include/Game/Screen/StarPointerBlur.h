#pragma once

#include "Game/NameObj/NameObj.h"
#include "Game/Util/Color8.h"
#include "JSystem/JGeometry/TVec.h"

class JUTTexture;

class StarPointerBlur : public NameObj {
public:
    StarPointerBlur(JUTTexture* pTexture);

    virtual ~StarPointerBlur();

    virtual void movement();
    virtual void draw() const;

    void show();
    void hide();
    void hideAll();
    void updatePoint(const TVec2f&, bool, TVec2f*);
    u16 findDrawPointRange(u16*, u16*) const;
};
