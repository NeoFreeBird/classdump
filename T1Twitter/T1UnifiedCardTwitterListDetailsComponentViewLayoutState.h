//
#ifndef T1UnifiedCardTwitterListDetailsComponentViewLayoutState_h
#define T1UnifiedCardTwitterListDetailsComponentViewLayoutState_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentViewLayoutState-Protocol.h"

@class NSObject, TUCLayoutContext;

@interface T1UnifiedCardTwitterListDetailsComponentViewLayoutState : NSObject <TUCComponentViewLayoutState>

@property (readonly, nonatomic) TUCLayoutContext *layoutContext;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } titleIconSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } titleSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } nameSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } userAvatarImageViewSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } userTextViewSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) id <TUCComponentModel> component;

/* instance methods */
- (id)initWithComponent:(id)component width:(double)width titleIconSize:(struct CGSize { double x0; double x1; })size titleSize:(struct CGSize { double x0; double x1; })size nameSize:(struct CGSize { double x0; double x1; })size userAvatarImageViewSize:(struct CGSize { double x0; double x1; })size userTextViewSize:(struct CGSize { double x0; double x1; })size layoutContext:(id)context;

@end

#endif /* T1UnifiedCardTwitterListDetailsComponentViewLayoutState_h */
