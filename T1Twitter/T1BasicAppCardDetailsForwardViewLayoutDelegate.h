//
#ifndef T1BasicAppCardDetailsForwardViewLayoutDelegate_h
#define T1BasicAppCardDetailsForwardViewLayoutDelegate_h
@import Foundation;

#include "T1AppCardDetailsViewLayoutDelegate-Protocol.h"

@class NSObject, NSString;

@interface T1BasicAppCardDetailsForwardViewLayoutDelegate : NSObject <T1AppCardDetailsViewLayoutDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (struct CGSize { double x0; double x1; })layoutableView:(id)view sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviewsForLayoutableView:(id)view;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsets;
- (id)titleFont;
- (id)titleTextColorForUnifiedCards:(_Bool)cards;
- (id)subtitleFontForUnifiedCards:(_Bool)cards;
- (long long)TFNButtonSizeForViewModel:(id)model;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutVerticallyWithLayoutState:(id)state viewModel:(id)model contentWidth:(double)width atPoint:(struct CGPoint { double x0; double x1; })point;

@end

#endif /* T1BasicAppCardDetailsForwardViewLayoutDelegate_h */
