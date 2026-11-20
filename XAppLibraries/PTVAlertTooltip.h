//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAlertTooltip_h
#define PTVAlertTooltip_h
@import Foundation;

@class UIImageView, UILabel, UIView, UIVisualEffectView;

@interface PTVAlertTooltip : UIView {
    /* instance variables */
    UIImageView *_imageView;
    UILabel *_titleLabel;
    double _width;
    UIVisualEffectView *_blurView;
}

/* instance methods */
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)initWithWidth:(double)width image:(id)image attributedTitle:(id)title;

@end

#endif /* PTVAlertTooltip_h */
