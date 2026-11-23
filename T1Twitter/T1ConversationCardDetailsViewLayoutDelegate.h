//
#ifndef T1ConversationCardDetailsViewLayoutDelegate_h
#define T1ConversationCardDetailsViewLayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"

@class NSObject, NSString;

@interface T1ConversationCardDetailsViewLayoutDelegate : NSObject <TFNLayoutableViewLayoutDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutTitleAndButtonsForLayoutState:(id)state viewModel:(id)model layoutMetrics:(id)metrics atPoint:(struct CGPoint { double x0; double x1; })point;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutThankYouLabelForLayoutState:(id)state viewModel:(id)model layoutMetrics:(id)metrics atPoint:(struct CGPoint { double x0; double x1; })point;
- (struct CGSize { double x0; double x1; })layoutableView:(id)view sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviewsForLayoutableView:(id)view;

@end

#endif /* T1ConversationCardDetailsViewLayoutDelegate_h */
