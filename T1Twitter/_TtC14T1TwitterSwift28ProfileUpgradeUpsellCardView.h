//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift28ProfileUpgradeUpsellCardView_h
#define _TtC14T1TwitterSwift28ProfileUpgradeUpsellCardView_h
@import Foundation;

@class T1TwitterSwift.ProfileUpsellViewModel, UIView, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo8UIButtonC;

@interface T1TwitterSwift.ProfileUpgradeUpsellCardView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ProfileUpsellViewModel viewModel;
    __C.UIView contentView;
    __C.UILabel titleLabel;
    __C.UIView percentOffBadgeView;
    __C.UILabel percentOffLabel;
    __C.UILabel subtitleLabel;
    __C.UIButton actionButton;
    __C.UIButton closeButton;
    __C.NSLayoutConstraint? titleTrailingToCloseConstraint;
    __C.NSLayoutConstraint? titleTrailingToBadgeConstraint;
}

/* instance methods */
- (void)onCloseTapped;
- (void)onActionTapped;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift28ProfileUpgradeUpsellCardView_h */
