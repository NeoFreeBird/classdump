//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCDefaultContainerViewLayoutDelegate_h
#define TUCDefaultContainerViewLayoutDelegate_h
@import Foundation;

#include "TUCComponentContainerViewLayoutDelegate-Protocol.h"

@class NSObject, NSString;

@interface TUCDefaultContainerViewLayoutDelegate : NSObject <TUCComponentContainerViewLayoutDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_tuc_emptyLayoutWithContainer:(id)container layoutContext:(id)context;

/* instance methods */
- (void)layoutSubviewsForLayoutableView:(id)view;
- (_Bool)isLayoutState:(id)state validForUnifiedCard:(id)card container:(id)container componentViewRegistry:(id)registry cardWidth:(double)width layoutContext:(id)context;
- (id)layoutStateForUnifiedCard:(id)card container:(id)container componentViewRegistry:(id)registry layoutContext:(id)context cardWidth:(double)width previousLayoutState:(id)state;

@end

#endif /* TUCDefaultContainerViewLayoutDelegate_h */
