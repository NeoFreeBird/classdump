//
#ifndef _TtC21TwitterUnifiedCardsUI47UnifiedCardsButtonGroupComponentViewLayoutState_h
#define _TtC21TwitterUnifiedCardsUI47UnifiedCardsButtonGroupComponentViewLayoutState_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentViewLayoutState-Protocol.h"

@class NSObject, Swift.Bool, _$sSaySo7NSValueCG, _$sSo16TUCLayoutContextC, _$sSo17TUCComponentModel_p, __C.CGSize;

@interface TwitterUnifiedCardsUI.UnifiedCardsButtonGroupComponentViewLayoutState : NSObject <TUCComponentViewLayoutState> { // (Swift)
    /* instance variables */
    [__C.NSValue] buttonFrames;
    __C.TUCLayoutContext layoutContext;
    Swift.Bool isLastComponent;
    Swift.Bool disableBottomPadding;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } size;
@property (nonatomic, readonly) id <TUCComponentModel> component;

/* instance methods */
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI47UnifiedCardsButtonGroupComponentViewLayoutState_h */
