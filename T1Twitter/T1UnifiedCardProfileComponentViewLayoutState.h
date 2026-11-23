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
