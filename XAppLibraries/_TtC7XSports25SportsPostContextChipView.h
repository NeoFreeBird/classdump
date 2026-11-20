//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports25SportsPostContextChipView_h
#define _TtC7XSports25SportsPostContextChipView_h
@import Foundation;

@class UIView, XSports.SportsImageLoader ?, _$s14TFSTwitterCore24TwitterSportsPostContextCMn ?, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo9UIControlC, _$syycSg;

@interface XSports.SportsPostContextChipView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    __C.UIControl highlightView;
    __C.UIImageView awayLogo;
    __C.UIImageView homeLogo;
    __C.UILabel awayAbbr;
    __C.UILabel homeAbbr;
    __C.UILabel statusLabel;
    __C.UIView teamDivider;
    __C.UIImageView chevron;
    XSports.SportsImageLoader ? awayLoader;
    XSports.SportsImageLoader ? homeLoader;
    nominal type descriptor for TFSTwitterCore.TwitterSportsPostContext ? context;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)handleTap;

@end

#endif /* _TtC7XSports25SportsPostContextChipView_h */
