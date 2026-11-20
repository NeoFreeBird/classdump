//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC21TwitterUnifiedCardsUI36UnifiedCardFollowButtonComponentViewP33_E8E1D669118AF32FE88267614F239A9811LayoutState_h
#define _TtCC21TwitterUnifiedCardsUI36UnifiedCardFollowButtonComponentViewP33_E8E1D669118AF32FE88267614F239A9811LayoutState_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentViewLayoutState-Protocol.h"

@class NSObject;

@interface TwitterUnifiedCardsUI.UnifiedCardFollowButtonComponentView.(LayoutState in _E8E1D669118AF32FE88267614F239A98) : NSObject <TUCComponentViewLayoutState> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 buttonFrame;
    @40@0:8:16@24@32 isLastComponent;
    @40@0:8:16@24@32 disableBottomPadding;
    @40@0:8:16@24@32 layoutContext;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } size;
@property (nonatomic, readonly) id <TUCComponentModel> component;

/* instance methods */
- (id)init;

@end

#endif /* _TtCC21TwitterUnifiedCardsUI36UnifiedCardFollowButtonComponentViewP33_E8E1D669118AF32FE88267614F239A9811LayoutState_h */
