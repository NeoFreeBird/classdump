//
#ifndef T1ControlBarAttributionLabel_h
#define T1ControlBarAttributionLabel_h
@import Foundation;

#include "T1ControlBarAttributionLabelDelegate-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"

@class NSString, TAVControlBarItem, TFNAttributedTextView;

@interface T1ControlBarAttributionLabel : TAVControlBarItem <TFNAttributedTextViewDelegate>

@property (retain, nonatomic) TFNAttributedTextView *textView;
@property (weak, nonatomic) id <T1ControlBarAttributionLabelDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)view;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* T1ControlBarAttributionLabel_h */
