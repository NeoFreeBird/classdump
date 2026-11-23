//
#ifndef _TtC13XDesignSystem22ShimmerPlaceholderView_h
#define _TtC13XDesignSystem22ShimmerPlaceholderView_h
@import Foundation;

@class UIView, XDesignSystem.ShimmerAnimationSpeed, _$sSo7UIColorCSg;

@interface XDesignSystem.ShimmerPlaceholderView : UIView { // (Swift)
    /* instance variables */
    XDesignSystem.ShimmerAnimationSpeed animationSpeed;
    __C.UIColor? baseGradientColor;
}

@property (nonatomic) _Bool hidden;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isHidden;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC13XDesignSystem22ShimmerPlaceholderView_h */
