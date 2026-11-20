//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNBadgeAccessory_h
#define TFNBadgeAccessory_h
@import Foundation;

@class NSString, UIColor, UIImageView, UILabel, UIView;

@interface TFNBadgeAccessory : UIView {
    /* instance variables */
    UIImageView *_badgeView;
    UILabel *_badgeLabel;
    struct CGSize { double width; double height; } _badgeTextSize;
}

@property (retain, nonatomic) UIColor *badgeColor;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *text;

/* class methods */
+ (double)badgeWidthForText:(id)text;
+ (double)estimatedBadgeWidthForText:(id)text;
+ (double)badgeHeight;
+ (struct CGSize { double x0; double x1; })_badgeTextSizeForText:(id)text font:(id)font;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_badgeTemplateImage;

@end

#endif /* TFNBadgeAccessory_h */
