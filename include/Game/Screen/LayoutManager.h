#pragma once

#include "JSystem/JGeometry/TVec.h"

namespace nw4r {
    namespace lyt {
        class AnimTransform;
        class Group;
        class Layout;
        class Pane;

        struct DrawInfo;
    };  // namespace lyt
};  // namespace nw4r

class LayoutGroupCtrl;
class LayoutHolder;
class LayoutPaneCtrl;

class LayoutManager {
public:
    LayoutManager(const char*, bool, u32, u32);

    void movement();
    void calcAnim();
    void draw() const;
    void addPaneCtrl(LayoutPaneCtrl*);
    LayoutPaneCtrl* createAndAddRootPaneCtrl(u32);
    LayoutPaneCtrl* createAndAddPaneCtrl(const char*, u32);
    LayoutPaneCtrl* getPaneCtrl(const char*) const;
    s32 getIndexOfPane(const char*) const;
    bool isExistPaneCtrl(const char*) const;
    void addGroupCtrl(LayoutGroupCtrl*);
    bool isPointing(const nw4r::lyt::Pane*, const TVec2f&) const;
    LayoutPaneCtrl* createAndAddGroupCtrl(const char*, u32);
    s32 getIndexOfGroupCtrl(const char*) const;
    // Some small functions ended up between here in SMG2
    void createPaneMtxRef(const char*);
    MtxPtr getPaneMtxRef(const char*) const;
    bool isExistPaneMtxRef(const char*) const;
    bool isPointing(const char*, const TVec2f&) const;
    nw4r::lyt::AnimTransform* getAnimTransform(const char*) const;
    void bindPaneCtrlAnim(LayoutPaneCtrl*, nw4r::lyt::AnimTransform*);
    void bindPaneCtrlAnimSub(u32&, nw4r::lyt::AnimTransform*);
    void unbindPaneCtrlAnim(LayoutPaneCtrl*, nw4r::lyt::AnimTransform*);
    void unbindPaneCtrlAnimSub(u32&, nw4r::lyt::AnimTransform*);
    void calcAnimWithoutLocationAdjust(const nw4r::lyt::DrawInfo&);
    nw4r::lyt::Group* getGroup(const char*) const;
    void initArc(const char*, const char*);
    void initDrawInfo();
    void initPaneInfo();
    void initPaneInfoRecursive(u32&, nw4r::lyt::Pane*);
    u32 countPanes(nw4r::lyt::Pane*);
    void initGroupCtrlList();
    void initTextBoxRecursive(nw4r::lyt::Pane*, nw4r::lyt::Pane*, const char*, u32);
    void animateRecursive(u32&, nw4r::lyt::Pane*);
    nw4r::lyt::Pane* getPane(const char*) const;
    nw4r::lyt::Pane* findPaneByName(const char*) const;
    void replaceIndDummyTexture();
    // Some LayoutHolder functions ended up between here in SMG2
    void removeUnnecessaryPanes(nw4r::lyt::Pane*);

    // TODO: Memory Layout
};