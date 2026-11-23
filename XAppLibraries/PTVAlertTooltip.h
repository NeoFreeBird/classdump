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
