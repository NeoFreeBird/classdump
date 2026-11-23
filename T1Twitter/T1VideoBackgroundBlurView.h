//
#ifndef T1VideoBackgroundBlurView_h
#define T1VideoBackgroundBlurView_h
@import Foundation;

@class UIImage, UIImageView, UIView;

@interface T1VideoBackgroundBlurView : UIView {
    /* instance variables */
    UIImageView *_backgroundImageView;
}

@property (retain, nonatomic) UIImage *previewImage;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1VideoBackgroundBlurView_h */
