//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC21TwitterUnifiedCardsUI42ProductExplorerContainerViewLayoutDelegate_h
#define _TtC21TwitterUnifiedCardsUI42ProductExplorerContainerViewLayoutDelegate_h
@import Foundation;

#include "TUCComponentContainerViewLayoutDelegate-Protocol.h"

@class NSObject;

@interface TwitterUnifiedCardsUI.ProductExplorerContainerViewLayoutDelegate : NSObject <TUCComponentContainerViewLayoutDelegate> // (Swift)

/* instance methods */
- (id)layoutStateForUnifiedCard:(id)card container:(id)container componentViewRegistry:(id)registry layoutContext:(id)context cardWidth:(double)width previousLayoutState:(id)state;
- (_Bool)isLayoutState:(id)state validForUnifiedCard:(id)card container:(id)container componentViewRegistry:(id)registry cardWidth:(double)width layoutContext:(id)context;
- (void)layoutSubviewsForLayoutableView:(id)view;
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI42ProductExplorerContainerViewLayoutDelegate_h */
