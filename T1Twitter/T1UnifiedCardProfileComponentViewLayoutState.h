//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UnifiedCardProfileComponentViewLayoutState_h
#define T1UnifiedCardProfileComponentViewLayoutState_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentViewLayoutState-Protocol.h"

@class NSObject, TUCLayoutContext;

@interface T1UnifiedCardProfileComponentViewLayoutState : NSObject <TUCComponentViewLayoutState>

@property (readonly, nonatomic) TUCLayoutContext *layoutContext;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) id <TUCComponentModel> component;

/* instance methods */
- (id)initWithProfileComponent:(id)component size:(struct CGSize { double x0; double x1; })size layoutContext:(id)context;

@end

#endif /* T1UnifiedCardProfileComponentViewLayoutState_h */
