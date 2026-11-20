//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNFullPromptView_h
#define TFNFullPromptView_h
@import Foundation;

#include "TFNAttributedTextView.h"
#include "TFNHorizontallyInsetView.h"
#include "TFNPromptContentViewSpec.h"
#include "TFNPromptImageSpec.h"
#include "TFNPromptTextSpec.h"
#include "TFNPromptView-Protocol.h"

@class NSArray, NSMapTable, NSString, UIButton, UIColor, UIImageView, UIScrollView;

@interface TFNFullPromptView : TFNHorizontallyInsetView <TFNPromptView> {
    /* instance variables */
    _Bool _showDismissOption;
    _Bool _showLogo;
    NSArray *_buttons;
    long long _textViewFontSizeOffset;
    NSMapTable *_buttonSeparatorMap;
    TFNAttributedTextView *_detailTextView;
    TFNAttributedTextView *_primaryTextView;
    TFNAttributedTextView *_secondaryTextView;
    id /* block */ _dismissOptionAction;
    id /* block */ _dismissButtonInitialization;
    UIButton *_dismissButton;
    UIImageView *_logoImageView;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
}

@property (retain, nonatomic) TFNPromptImageSpec *imageSpec;
@property (retain, nonatomic) TFNPromptTextSpec *primaryTextSpec;
@property (retain, nonatomic) TFNPromptTextSpec *secondaryTextSpec;
@property (retain, nonatomic) TFNPromptContentViewSpec *contentViewSpec;
@property (retain, nonatomic) TFNPromptTextSpec *detailTextSpec;
@property (retain, nonatomic) NSArray *buttonSpecs;
@property (nonatomic) _Bool excludedFromVDLLeftAlign;
@property (nonatomic) unsigned long long dismissOptionType;
@property (nonatomic) _Bool shouldDisableButtons;
@property (copy, nonatomic) id /* block */ contentInsetsCalculator;
@property (readonly, nonatomic) UIColor *promptChromeColor;
@property (retain, nonatomic) TFNPromptTextSpec *footerTextSpec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)private_adjustFontSize:(id)size byOffset:(long long)offset;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)calculatedLayoutMetrics;
- (void)setShowDismissOption:(_Bool)option action:(id /* block */)action initialization:(id /* block */)initialization;
- (void)setShowLogo:(_Bool)logo;
- (void)layoutSubviews;
- (_Bool)private_layoutSubviewsWithLogo:(_Bool)logo spacingMultiplier:(double)multiplier fontSizeOffset:(long long)offset imageScale:(double)scale;
- (void)private_dismissAction:(id)action;
- (_Bool)private_hasMinimumFontSize:(id)size forTextSpec:(id)spec;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_tfn_contentEdgeInsetsWithSpacingMultiplier:(double)multiplier;
- (_Bool)isExcludedFromVDLLeftAlign;

@end

#endif /* TFNFullPromptView_h */
