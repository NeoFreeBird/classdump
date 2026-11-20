//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XNavigation26NavigationBarBackBadgeView_h
#define _TtC11XNavigation26NavigationBarBackBadgeView_h
@import Foundation;

@class UIView, XNavigation.FrameDriver, XNavigation.NavigationBarBackBadgeView.Change ?, _$sSSSg, _$sSo11UIImageViewC, _$sSo6UIViewC;

@interface XNavigation.NavigationBarBackBadgeView : UIView { // (Swift)
    /* instance variables */
    __C.UIView fillView;
    __C.UIView maskContainer;
    __C.UIImageView holeView;
    __C.UIView leadingPad;
    __C.UIView trailingPad;
    __C.UIImageView fromCover;
    __C.UIImageView toCover;
    Swift.String? text;
    XNavigation.NavigationBarBackBadgeView.Change ? change;
    XNavigation.FrameDriver digitDriver;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XNavigation26NavigationBarBackBadgeView_h */
