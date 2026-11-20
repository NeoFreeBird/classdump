//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC21TwitterUnifiedCardsUI27SwipeableMediaComponentView11LayoutState_h
#define _TtCC21TwitterUnifiedCardsUI27SwipeableMediaComponentView11LayoutState_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentViewLayoutState-Protocol.h"

@class NSObject, _$s12CoreGraphics7CGFloatVMn, _$sSo16TUCLayoutContextCSg, _$sSo17TUCComponentModel_p, __C.CGSize;

@interface TwitterUnifiedCardsUI.SwipeableMediaComponentView.LayoutState : NSObject <TUCComponentViewLayoutState> { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat mediaWidth;
    __C.TUCLayoutContext? layoutContext;
}

@property (nonatomic, readonly) id <TUCComponentModel> component;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } size;

/* instance methods */
- (id)init;

@end

#endif /* _TtCC21TwitterUnifiedCardsUI27SwipeableMediaComponentView11LayoutState_h */
