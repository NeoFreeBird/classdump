//
#ifndef T1UnifiedCardTwitterMediaWithDetailsHorizontalComponentViewLayoutState_h
#define T1UnifiedCardTwitterMediaWithDetailsHorizontalComponentViewLayoutState_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentViewLayoutState-Protocol.h"

@class NSObject, TUCLayoutContext;

@interface T1UnifiedCardTwitterMediaWithDetailsHorizontalComponentViewLayoutState : NSObject <TUCComponentViewLayoutState>

@property (readonly, nonatomic) TUCLayoutContext *layoutContext;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } titleSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } subtitleSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) id <TUCComponentModel> component;

/* instance methods */
- (id)initWithComponent:(id)component width:(double)width titleSize:(struct CGSize { double x0; double x1; })size subtitleSize:(struct CGSize { double x0; double x1; })size layoutContext:(id)context;

@end

#endif /* T1UnifiedCardTwitterMediaWithDetailsHorizontalComponentViewLayoutState_h */
