//
#ifndef _TtC21TwitterUnifiedCardsUI40CompactCardVideoComponentViewLayoutState_h
#define _TtC21TwitterUnifiedCardsUI40CompactCardVideoComponentViewLayoutState_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentViewLayoutState-Protocol.h"

@class NSObject, _$sSo17TUCComponentModel_p, __C.CGRect, __C.CGSize;

@interface TwitterUnifiedCardsUI.CompactCardVideoComponentViewLayoutState : NSObject <TUCComponentViewLayoutState> { // (Swift)
    /* instance variables */
    __C.CGRect mediaContainerFrame;
    __C.CGRect mediaFrame;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } size;
@property (nonatomic, readonly) id <TUCComponentModel> component;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI40CompactCardVideoComponentViewLayoutState_h */
