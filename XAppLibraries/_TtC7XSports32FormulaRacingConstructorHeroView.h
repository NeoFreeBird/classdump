//
#ifndef _TtC7XSports32FormulaRacingConstructorHeroView_h
#define _TtC7XSports32FormulaRacingConstructorHeroView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.SportsImageLoader, _$s13XDesignSystem24VerifiedBadgeStickerViewCMn, _$sSo11UIImageViewC, _$sSo15CAGradientLayerC, _$sSo7UILabelC;

@interface XSports.FormulaRacingConstructorHeroView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.CAGradientLayer gradientLayer;
    __C.CAGradientLayer scrimLayer;
    __C.UIImageView logoView;
    __C.UILabel nameLabel;
    __C.UILabel handleLabel;
    nominal type descriptor for XDesignSystem.VerifiedBadgeStickerView verifiedBadgeView;
    __C.UILabel standingLabel;
    XSports.SportsImageLoader logoLoader;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports32FormulaRacingConstructorHeroView_h */
