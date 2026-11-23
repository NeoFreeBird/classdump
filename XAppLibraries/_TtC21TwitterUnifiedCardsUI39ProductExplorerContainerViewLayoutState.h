//
#ifndef _TtC21TwitterUnifiedCardsUI39ProductExplorerContainerViewLayoutState_h
#define _TtC21TwitterUnifiedCardsUI39ProductExplorerContainerViewLayoutState_h
@import Foundation;

#include "TUCComponentContainer-Protocol.h"
#include "TUCComponentContainerViewLayoutState-Protocol.h"
#include "TUCLayoutContext.h"

@class NSObject, _$sSo16TUCLayoutContextC, _$sSo21TUCComponentContainer_p, __C.CGSize;

@interface TwitterUnifiedCardsUI.ProductExplorerContainerViewLayoutState : NSObject <TUCComponentContainerViewLayoutState> // (Swift)

@property (nonatomic, retain) id <TUCComponentContainer> container;
@property (nonatomic, retain) TUCLayoutContext *layoutContext;
@property (nonatomic) struct CGSize { double x0; double x1; } size;

/* instance methods */
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI39ProductExplorerContainerViewLayoutState_h */
