#pragma once

#include "Game/Util/Array.h"
#include "JSystem/JGeometry.h"
#include "revolution/types.h"

namespace nw4r {
    namespace lyt {
        class Pane;
    };
};  // namespace nw4r

class J3DFrameCtrl;
class LayoutAnmPlayer;
class LayoutManager;

class LayoutPaneCtrl {
public:
    LayoutPaneCtrl(LayoutManager* pHost, const char* pPaneName, u32 animLayerNum);

    void movement();
    void calcAnim();
    void start(const char*, u32);
    void stop(u32);
    bool isAnimStopped(u32) const;
    void reflectFollowPos();
    J3DFrameCtrl* getFrameCtrl(u32) const;
    void recalcChildGlobalMtx(nw4r::lyt::Pane*);

    LayoutManager* mHost; // 0x00
    nw4r::lyt::Pane* mPane; // 0x04
    s32 mPaneIndex; // 0x08
    MR::AssignableArray< LayoutAnmPlayer* > mAnmPlayerArray; // 0x0C
    u32 mFollowType; // 0x14
    const TVec2f* mFollowPos; // 0x18
};