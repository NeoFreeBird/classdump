//
#ifndef _TtC21TwitterUnifiedCardsUI30PosterContainerViewLayoutState_h
#define _TtC21TwitterUnifiedCardsUI30PosterContainerViewLayoutState_h
@import Foundation;

#include "TUCComponentContainer-Protocol.h"
#include "TUCComponentContainerViewLayoutState-Protocol.h"
#include "TUCLayoutContext.h"

@class NSObject, _$sSa -> __C.CGSize, _$sSo16TUCLayoutContextC, _$sSo21TUCComponentContainer_p, __C.CGSize;

@interface TwitterUnifiedCardsUI.PosterContainerViewLayoutState : NSObject <TUCComponentContainerViewLayoutState> { // (Swift)
    /* instance variables */
    Swift.Array -> __C.CGSize componentSizes;
}

@property (nonatomic, readonly) id <TUCComponentContainer> container;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } size;
@property (nonatomic, readonly) TUCLayoutContext *layoutContext;

/* instance methods */
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI30PosterContainerViewLayoutState_h */
