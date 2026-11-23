//
#ifndef T1StatusContextIndicatorView_h
#define T1StatusContextIndicatorView_h
@import Foundation;

#include "T1StatusContextIndicatorViewDelegate-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"

@class NSString, TFNAttributedTextView, UIFont, UIView;

@interface T1StatusContextIndicatorView : UIView <TFNAttributedTextViewDelegate>

@property (readonly, nonatomic) TFNAttributedTextView *textView;
@property (weak, nonatomic) id <T1StatusContextIndicatorViewDelegate> delegate;
@property (nonatomic) _Bool enabled;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIFont *font;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } baselineContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)layoutWithText:(id)text font:(id)font origin:(struct CGPoint { double x0; double x1; })origin width:(double)width outFrame:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)frame outContentHeight:(out double *)height;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_statusContextIndicatorView_initialize;
- (void)_t1_main_updateTextView;
- (void)_t1_main_updateAccessibility;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (_Bool)isEnabled;

@end

#endif /* T1StatusContextIndicatorView_h */
