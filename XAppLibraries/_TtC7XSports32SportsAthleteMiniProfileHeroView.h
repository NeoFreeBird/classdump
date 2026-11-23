//
#ifndef _TtC7XSports32SportsAthleteMiniProfileHeroView_h
#define _TtC7XSports32SportsAthleteMiniProfileHeroView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.SportsAthleteMiniProfileHeroView.Content, XSports.SportsAthleteMiniProfileHeroView.HighlightsView, XSports.SportsImageLoader, _$s13XDesignSystem24VerifiedBadgeStickerViewCMn, _$sSo11UIImageViewC, _$sSo12CAShapeLayerC, _$sSo15CAGradientLayerC, _$sSo6UIViewC, _$sSo6UIViewC4view_ _$s12CoreGraphics7CGFloatVMn heighttSg, _$sSo7UILabelC;

@interface XSports.SportsAthleteMiniProfileHeroView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    XSports.SportsAthleteMiniProfileHeroView.Content content;
    __C.UIView bannerView;
    __C.UIView stageView;
    __C.UIView panelView;
    __C.CAShapeLayer panelMask;
    __C.CAGradientLayer scrimLayer;
    __C.UIImageView teamLogoView;
    __C.UIImageView headshotView;
    __C.UIImageView avatarView;
    __C.UIImageView profileImageView;
    __C.UILabel firstNameLabel;
    __C.UILabel lastNameLabel;
    nominal type descriptor for XDesignSystem.VerifiedBadgeStickerView verifiedBadgeView;
    __C.UILabel handleLabel;
    __C.UILabel detailsLabel;
    __C.UILabel measurementsLabel;
    XSports.SportsAthleteMiniProfileHeroView.HighlightsView highlightsView;
    __C.UIViewview first-element-marker  nominal type descriptor for CoreGraphics.CGFloat heighttSg accessory;
    Swift.Bool reservesLeadingButton;
    XSports.SportsImageLoader teamLogoLoader;
    XSports.SportsImageLoader headshotLoader;
    XSports.SportsImageLoader avatarLoader;
    XSports.SportsImageLoader profileImageLoader;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports32SportsAthleteMiniProfileHeroView_h */
