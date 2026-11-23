//
#ifndef TUCMediaComponentViewLayoutState_h
#define TUCMediaComponentViewLayoutState_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentViewLayoutState-Protocol.h"
#include "TUCLayoutContext.h"

@class NSObject;

@interface TUCMediaComponentViewLayoutState : NSObject <TUCComponentViewLayoutState>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } mediaFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } buttonFrame;
@property (readonly, nonatomic) TUCLayoutContext *layoutContext;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) id <TUCComponentModel> component;

/* instance methods */
- (id)initWithMediaComponent:(id)component size:(struct CGSize { double x0; double x1; })size mediaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame buttonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame layoutContext:(id)context;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TUCMediaComponentViewLayoutState_h */
