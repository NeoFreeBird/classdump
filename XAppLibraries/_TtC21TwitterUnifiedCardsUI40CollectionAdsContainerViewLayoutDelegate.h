//
#ifndef _TtC21TwitterUnifiedCardsUI40CollectionAdsContainerViewLayoutDelegate_h
#define _TtC21TwitterUnifiedCardsUI40CollectionAdsContainerViewLayoutDelegate_h
@import Foundation;

#include "TUCComponentContainerViewLayoutDelegate-Protocol.h"

@class NSObject;

@interface TwitterUnifiedCardsUI.CollectionAdsContainerViewLayoutDelegate : NSObject <TUCComponentContainerViewLayoutDelegate> // (Swift)

/* instance methods */
- (id)layoutStateForUnifiedCard:(id)card container:(id)container componentViewRegistry:(id)registry layoutContext:(id)context cardWidth:(double)width previousLayoutState:(id)state;
- (_Bool)isLayoutState:(id)state validForUnifiedCard:(id)card container:(id)container componentViewRegistry:(id)registry cardWidth:(double)width layoutContext:(id)context;
- (void)layoutSubviewsForLayoutableView:(id)view;
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI40CollectionAdsContainerViewLayoutDelegate_h */
