//
#ifndef TFNHUDContainerView_h
#define TFNHUDContainerView_h
@import Foundation;

@class NSString, UIActivityIndicatorView, UIImage, UIImageView, UILabel, UIView;

@interface TFNHUDContainerView : UIView {
    /* instance variables */
    UILabel *_label;
    UIImageView *_imageView;
}

@property (nonatomic) long long mode;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *customImage;
@property (nonatomic) _Bool useCenteredImage;
@property (readonly, nonatomic) UIActivityIndicatorView *activity;

/* instance methods */
- (id)initWithText:(id)text mode:(long long)mode;
- (void)layoutSubviews;
- (id)_createLabel:(double)label;
- (void)updateText;
- (void)_updateMode;

@end

#endif /* TFNHUDContainerView_h */
