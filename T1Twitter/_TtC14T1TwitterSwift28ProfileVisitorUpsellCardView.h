//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift28ProfileVisitorUpsellCardView_h
#define _TtC14T1TwitterSwift28ProfileVisitorUpsellCardView_h
@import Foundation;

@class T1TwitterSwift.ProfileUpsellViewModel, UIView, _$s10Foundation3URLVMn ?, _$s14TwitterUISwift15AvatarImageViewCMn, _$sSS, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo8UIButtonC, __C.CGSize;

@interface T1TwitterSwift.ProfileVisitorUpsellCardView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ProfileUpsellViewModel viewModel;
    nominal type descriptor for Foundation.URL ? viewerImageURL;
    __C.CGSize viewerImageDimensions;
    Swift.String profileScreenName;
    __C.TIPImagePipeline? imagePipeline;
    __C.UIView contentView;
    __C.UIView avatarContainerView;
    nominal type descriptor for TwitterUISwift.AvatarImageView avatarImageView;
    __C.UIImageView verifiedBadgeView;
    __C.UILabel titleLabel;
    __C.UILabel subtitleLabel;
    __C.UIStackView actionsStackView;
    __C.UIButton dismissButton;
    __C.UIButton getVerifiedButton;
}

/* instance methods */
- (void)layoutSubviews;
- (void)onDismissTapped;
- (void)onGetVerifiedTapped;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift28ProfileVisitorUpsellCardView_h */
