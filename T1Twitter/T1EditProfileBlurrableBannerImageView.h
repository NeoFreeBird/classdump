//
#ifndef T1EditProfileBlurrableBannerImageView_h
#define T1EditProfileBlurrableBannerImageView_h
@import Foundation;

@class TUIUserBannerImageView, UIImage;

@interface T1EditProfileBlurrableBannerImageView : TUIUserBannerImageView

@property (retain, nonatomic) UIImage *fetchedImage;
@property (retain, nonatomic) UIImage *customImage;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)awakeFromNib;
- (void)_commonInitEditProfileBlurrableBannerImageView;
- (void)currentViewModelWillChange:(id)change;
- (id)tip_fetchedImage;
- (void)setTip_fetchedImage:(id)image;
- (void)_t1_updateBaseImage;

@end

#endif /* T1EditProfileBlurrableBannerImageView_h */
