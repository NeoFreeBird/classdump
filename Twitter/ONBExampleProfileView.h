//
#ifndef ONBExampleProfileView_h
#define ONBExampleProfileView_h
@import Foundation;

#include "ONBAddBannerControl.h"
#include "ONBExampleProfileViewDelegate-Protocol.h"

@class TFNFlexibleLayoutView, TUIAvatarImageView, UIImage, UIImageView, UIView;

@interface ONBExampleProfileView : UIView {
    /* instance variables */
    id <ONBExampleProfileViewDelegate> _delegate;
    ONBAddBannerControl *_bannerImageControl;
    TFNFlexibleLayoutView *_contentView;
    TUIAvatarImageView *_avatarImageView;
    UIImageView *_bannerImageView;
}

@property (retain, nonatomic) UIImage *forcedAvatarImage;
@property (retain, nonatomic) UIImage *forcedBannerImage;

/* instance methods */
- (id)initWithAccount:(id)account userDataSource:(id)source forcedAvatarImage:(id)image forcedBannerImage:(id)image showCurrentBanner:(_Bool)banner delegate:(id)delegate;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })sizeThatFitsSize:(struct CGSize { double x0; double x1; })size layoutMetrics:(id)metrics;
- (id)private_contentViewWithAccount:(id)account userDataSource:(id)source forcedAvatarImage:(id)image forcedBannerImage:(id)image showCurrentBanner:(_Bool)banner;
- (void)private_didTapAddBannerControl:(id)control;

@end

#endif /* ONBExampleProfileView_h */
