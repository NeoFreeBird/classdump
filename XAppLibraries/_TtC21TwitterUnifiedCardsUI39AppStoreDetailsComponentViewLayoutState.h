//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC21TwitterUnifiedCardsUI39AppStoreDetailsComponentViewLayoutState_h
#define _TtC21TwitterUnifiedCardsUI39AppStoreDetailsComponentViewLayoutState_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentViewLayoutState-Protocol.h"

@class NSObject, Swift.Bool, _$sSo16TUCLayoutContextC, _$sSo17TUCComponentModel_p, __C.CGRect, __C.CGSize;

@interface TwitterUnifiedCardsUI.AppStoreDetailsComponentViewLayoutState : NSObject <TUCComponentViewLayoutState> { // (Swift)
    /* instance variables */
    __C.TUCLayoutContext layoutContext;
    Swift.Bool isLastComponent;
    Swift.Bool disableBottomPadding;
    __C.CGRect titleFrame;
    __C.CGRect ratingsFrame;
    __C.CGRect subtitleFrame;
    __C.CGRect appIconFrame;
    __C.CGRect buttonFrame;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } size;
@property (nonatomic, readonly) id <TUCComponentModel> component;

/* instance methods */
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI39AppStoreDetailsComponentViewLayoutState_h */
