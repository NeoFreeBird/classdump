//
#ifndef T1PromptContentView_h
#define T1PromptContentView_h
@import Foundation;

#include "TFNPromptView-Protocol.h"

@class NSArray, NSString, TFNAttributedTextView, TFNPromptContentViewSpec, TFNPromptImageSpec, TFNPromptTextSpec, UIColor, UIView;

@interface T1PromptContentView : UIView <TFNPromptView> {
    /* instance variables */
    NSArray *_buttons;
    TFNAttributedTextView *_primaryTextView;
    TFNAttributedTextView *_secondaryTextView;
}

@property (retain, nonatomic) TFNPromptTextSpec *primaryTextSpec;
@property (retain, nonatomic) TFNPromptTextSpec *secondaryTextSpec;
@property (retain, nonatomic) NSArray *buttonSpecs;
@property (nonatomic) long long textViewFontSizeOffset;
@property (nonatomic) double spacingMultiplier;
@property (nonatomic) _Bool excludedFromVDLLeftAlign;
@property (readonly, nonatomic) UIColor *promptChromeColor;
@property (retain, nonatomic) TFNPromptImageSpec *imageSpec;
@property (retain, nonatomic) TFNPromptTextSpec *detailTextSpec;
@property (retain, nonatomic) TFNPromptTextSpec *footerTextSpec;
@property (retain, nonatomic) TFNPromptContentViewSpec *contentViewSpec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_removeTextViews;
- (void)layoutSubviews;
- (double)private_layoutWithMetrics;
- (id)accessibilityElements;
- (_Bool)isExcludedFromVDLLeftAlign;

@end

#endif /* T1PromptContentView_h */
