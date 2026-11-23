//
#ifndef _TtCC21TwitterUnifiedCardsUI24CompactCardContainerViewP33_B6163D1AF1DCD021C723549475A1F85014LayoutDelegate_h
#define _TtCC21TwitterUnifiedCardsUI24CompactCardContainerViewP33_B6163D1AF1DCD021C723549475A1F85014LayoutDelegate_h
@import Foundation;

#include "TUCComponentContainerViewLayoutDelegate-Protocol.h"

@class NSObject;

@interface TwitterUnifiedCardsUI.CompactCardContainerView.(LayoutDelegate in _B6163D1AF1DCD021C723549475A1F850) : NSObject <TUCComponentContainerViewLayoutDelegate> // (Swift)

/* instance methods */
- (id)layoutStateForUnifiedCard:(id)card container:(id)container componentViewRegistry:(id)registry layoutContext:(id)context cardWidth:(double)width previousLayoutState:(id)state;
- (_Bool)isLayoutState:(id)state validForUnifiedCard:(id)card container:(id)container componentViewRegistry:(id)registry cardWidth:(double)width layoutContext:(id)context;
- (void)layoutSubviewsForLayoutableView:(id)view;
- (id)init;

@end

#endif /* _TtCC21TwitterUnifiedCardsUI24CompactCardContainerViewP33_B6163D1AF1DCD021C723549475A1F85014LayoutDelegate_h */
