//
#ifndef ONBAddBannerControl_h
#define ONBAddBannerControl_h
@import Foundation;

@class UIControl, UIImage, UIImageView, UILabel;

@interface ONBAddBannerControl : UIControl

@property (retain, nonatomic) UIImageView *bannerImageView;
@property (retain, nonatomic) UIImageView *cameraIcon;
@property (retain, nonatomic) UILabel *cameraLabel;
@property (nonatomic) double backgroundAlpha;
@property (retain, nonatomic) UIImage *bannerImage;

/* instance methods */
- (id)initWithBackgroundAlpha:(double)alpha;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)highlighted;

@end

#endif /* ONBAddBannerControl_h */
