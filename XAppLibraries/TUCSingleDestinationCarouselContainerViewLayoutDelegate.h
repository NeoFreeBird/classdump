//
#ifndef TUCSingleDestinationCarouselContainerViewLayoutDelegate_h
#define TUCSingleDestinationCarouselContainerViewLayoutDelegate_h
@import Foundation;

#include "TUCDefaultContainerViewLayoutDelegate.h"

@interface TUCSingleDestinationCarouselContainerViewLayoutDelegate : TUCDefaultContainerViewLayoutDelegate

/* instance methods */
- (void)layoutSubviewsForLayoutableView:(id)view;
- (id)layoutStateForUnifiedCard:(id)card container:(id)container componentViewRegistry:(id)registry layoutContext:(id)context cardWidth:(double)width previousLayoutState:(id)state;

@end

#endif /* TUCSingleDestinationCarouselContainerViewLayoutDelegate_h */
