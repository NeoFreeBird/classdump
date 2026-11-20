//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCComponentContainerViewLayoutDelegate_Protocol_h
#define TUCComponentContainerViewLayoutDelegate_Protocol_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"

@protocol TUCComponentContainerViewLayoutDelegate <TFNLayoutableViewLayoutDelegate>

@required

/* required instance methods */
- (id)layoutStateForUnifiedCard:(id)card container:(id)container componentViewRegistry:(id)registry layoutContext:(id)context cardWidth:(double)width previousLayoutState:(id)state;
- (_Bool)isLayoutState:(id)state validForUnifiedCard:(id)card container:(id)container componentViewRegistry:(id)registry cardWidth:(double)width layoutContext:(id)context;

@optional

@end

#endif /* TUCComponentContainerViewLayoutDelegate_Protocol_h */
