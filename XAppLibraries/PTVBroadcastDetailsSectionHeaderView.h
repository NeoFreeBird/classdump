//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastDetailsSectionHeaderView_h
#define PTVBroadcastDetailsSectionHeaderView_h
@import Foundation;

#include "PTVTableHeaderView.h"

@class UIImageView, UILabel;

@interface PTVBroadcastDetailsSectionHeaderView : PTVTableHeaderView

@property (readonly, nonatomic) UIImageView *heartImage;
@property (readonly, nonatomic) UILabel *heartLabel;

/* class methods */
+ (id)LabelColor;
+ (double)HeightWithLabel:(id)label NHearts:(long long)nhearts ShouldShowHearts:(_Bool)hearts SuperviewSize:(struct CGSize { double x0; double x1; })size;
+ (id)HeartsFont;
+ (id)HeartsColor;
+ (id)HeartsImage;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame label:(id)label;
- (void)setHeartsContentVisible:(_Bool)visible;
- (void)setNHeartsGiven:(long long)given;

@end

#endif /* PTVBroadcastDetailsSectionHeaderView_h */
