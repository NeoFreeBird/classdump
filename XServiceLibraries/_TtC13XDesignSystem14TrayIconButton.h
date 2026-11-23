//
#ifndef _TtC13XDesignSystem14TrayIconButton_h
#define _TtC13XDesignSystem14TrayIconButton_h
@import Foundation;

@class UIView, XDesignSystem.Glass ?, XDesignSystem.TrayHeaderConfiguration.Hero.ButtonBackground, XDesignSystem.TrayIconButton.MenuControl ?, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewC, _$sSo6UIMenuCSg, _$syycSg;

@interface XDesignSystem.TrayIconButton : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView iconView;
    XDesignSystem.TrayIconButton.MenuControl ? menuControl;
    XDesignSystem.Glass ? glassView;
    (() -> ())? onTap;
    __C.UIMenu? menu;
    XDesignSystem.TrayHeaderConfiguration.Hero.ButtonBackground buttonBackground;
    nominal type descriptor for CoreGraphics.CGFloat visibleAlpha;
}

@property (nonatomic) double alpha;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)menuControlTouchDown;
- (void)menuControlTouchUp;
- (void)menuControlDidTriggerMenu;
- (_Bool)accessibilityActivate;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* _TtC13XDesignSystem14TrayIconButton_h */
