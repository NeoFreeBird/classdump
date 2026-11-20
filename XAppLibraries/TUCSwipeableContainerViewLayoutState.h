//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCSwipeableContainerViewLayoutState_h
#define TUCSwipeableContainerViewLayoutState_h
@import Foundation;

#include "TUCComponentContainer-Protocol.h"
#include "TUCComponentContainerViewLayoutState-Protocol.h"
#include "TUCLayoutContext.h"

@class NSArray, NSObject;

@interface TUCSwipeableContainerViewLayoutState : NSObject <TUCComponentContainerViewLayoutState> // (Swift)

@property (nonatomic, readonly) id <TUCComponentContainer> container;
@property (nonatomic, readonly) TUCLayoutContext *layoutContext;
@property (nonatomic, readonly) NSArray *childContainerLayouts;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } size;

/* instance methods */
- (id)initWithContainer:(id)container layoutContext:(id)context childContainerLayouts:(id)layouts size:(struct CGSize { double x0; double x1; })size;
- (id)init;

@end

#endif /* TUCSwipeableContainerViewLayoutState_h */
