//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLegacyHalfPromptView_h
#define TFNLegacyHalfPromptView_h
@import Foundation;

#include "TFNAttributedTextView.h"
#include "TFNHorizontallyInsetView.h"
#include "TFNPromptContentViewSpec.h"
#include "TFNPromptImageSpec.h"
#include "TFNPromptTextSpec.h"
#include "TFNPromptView-Protocol.h"

@class NSArray, NSString, UIColor, UIImageView, UIScrollView;

@interface TFNLegacyHalfPromptView : TFNHorizontallyInsetView <TFNPromptView> {
    /* instance variables */
    NSArray *_buttons;
    TFNAttributedTextView *_primaryTextView;
    TFNAttributedTextView *_secondaryTextView;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
}

@property (retain, nonatomic) TFNPromptImageSpec *imageSpec;
@property (retain, nonatomic) TFNPromptTextSpec *primaryTextSpec;
@property (retain, nonatomic) TFNPromptTextSpec *secondaryTextSpec;
@property (retain, nonatomic) TFNPromptContentViewSpec *contentViewSpec;
@property (retain, nonatomic) NSArray *buttonSpecs;
@property (nonatomic) _Bool excludedFromVDLLeftAlign;
@property (copy, nonatomic) id /* block */ contentInsetsCalculator;
@property (readonly, nonatomic) UIColor *promptChromeColor;
@property (retain, nonatomic) TFNPromptTextSpec *detailTextSpec;
@property (retain, nonatomic) TFNPromptTextSpec *footerTextSpec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)calculatedLayoutMetrics;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (double)private_heightForWidth:(double)width performLayout:(_Bool)layout;
- (_Bool)isExcludedFromVDLLeftAlign;

@end

#endif /* TFNLegacyHalfPromptView_h */
