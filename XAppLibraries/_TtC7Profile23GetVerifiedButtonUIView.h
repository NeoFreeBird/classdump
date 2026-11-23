//
#ifndef _TtC7Profile23GetVerifiedButtonUIView_h
#define _TtC7Profile23GetVerifiedButtonUIView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSS, _$sSo32TFNCustomScreenshotContainerViewCSg, _$sSo8UIButtonCSg, _$syyc;

@interface Profile.GetVerifiedButtonUIView : UIView { // (Swift)
    /* instance variables */
    __C.UIButton? button;
    () -> () tapAction;
    __C.TFNCustomScreenshotContainerView? secureContainer;
    Swift.Bool isEligibleForPremium;
    Swift.String title;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)buttonTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7Profile23GetVerifiedButtonUIView_h */
