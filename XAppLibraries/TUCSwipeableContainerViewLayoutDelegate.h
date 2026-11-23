//
#ifndef TUCSwipeableContainerViewLayoutDelegate_h
#define TUCSwipeableContainerViewLayoutDelegate_h
@import Foundation;

#include "TUCComponentContainerViewLayoutDelegate-Protocol.h"

@class NSObject;

@interface TUCSwipeableContainerViewLayoutDelegate : NSObject <TUCComponentContainerViewLayoutDelegate> // (Swift)

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)layoutSubviewsForLayoutableView:(id)view;
- (_Bool)isLayoutState:(id)state validForUnifiedCard:(id)card container:(id)container componentViewRegistry:(id)registry cardWidth:(double)width layoutContext:(id)context;
- (id)layoutStateForUnifiedCard:(id)card container:(id)container componentViewRegistry:(id)registry layoutContext:(id)context cardWidth:(double)width previousLayoutState:(id)state;

@end

#endif /* TUCSwipeableContainerViewLayoutDelegate_h */
