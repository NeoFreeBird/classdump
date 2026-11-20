//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1InfoTextView_h
#define T1InfoTextView_h
@import Foundation;

#include "T1InfoTextLayoutSpec-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNSizeThatFitsHelperDelegate-Protocol.h"

@class NSString, TFNAttributedTextView, TFNDismissButton, TFNSizeThatFitsHelper, UIImageView, UIView;

@interface T1InfoTextView : UIView <TFNSizeThatFitsHelperDelegate, TFNAttributedTextViewDelegate> {
    /* instance variables */
    TFNSizeThatFitsHelper *_layoutHelper;
}

@property (retain, nonatomic) UIImageView *badgeView;
@property (retain, nonatomic) TFNAttributedTextView *titleLabel;
@property (retain, nonatomic) TFNAttributedTextView *detailsLabel;
@property (retain, nonatomic) TFNDismissButton *caretButton;
@property (readonly, nonatomic) id <T1InfoTextLayoutSpec> layoutSpec;
@property (copy, nonatomic) id /* block */ urlClickActionBlock;
@property (copy, nonatomic) id /* block */ titleClickActionBlock;
@property (copy, nonatomic) id /* block */ caretButtonActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)width forLayoutSpec:(id)spec layoutMetrics:(id)metrics;
+ (void)frames:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)frames forLayoutSpec:(id)spec layoutMetrics:(id)metrics atWidth:(double)width;

/* instance methods */
- (_Bool)updateWithLayoutSpecIfNeeded:(id)needed;
- (void)updateAccessibility;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setBackgroundColor:(id)color;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)sizeThatFitsHelper:(id)helper layoutSubviewsForView:(id)view atWidth:(double)width;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextViewDidTapInactiveArea:(id)area;
- (void)_t1_handleClick;
- (void)_t1_handleCaretButtonClick;

@end

#endif /* T1InfoTextView_h */
