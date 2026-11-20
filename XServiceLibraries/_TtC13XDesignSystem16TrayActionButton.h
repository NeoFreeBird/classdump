//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem16TrayActionButton_h
#define _TtC13XDesignSystem16TrayActionButton_h
@import Foundation;

@class Swift.Bool, UIView, XDesignSystem.Button.Border ?, XDesignSystem.TrayInterruptibleTransition, _$sSS, _$sSo6UIViewC, _$sSo7UIColorC, _$sSo7UILabelC, _$sSo7UILabelCSg, _$syycSg;

@interface XDesignSystem.TrayActionButton : UIView { // (Swift)
    /* instance variables */
    __C.UIView solidBackingView;
    __C.UIView contentView;
    __C.UILabel titleLabel;
    (() -> ())? onPress;
    Swift.String title;
    __C.UIColor fillColor;
    __C.UIColor textColor;
    XDesignSystem.Button.Border ? stroke;
    __C.UIColor backingColor;
    Swift.Bool isButtonEnabled;
    __C.UILabel? titleTransitionLabel;
    XDesignSystem.TrayInterruptibleTransition titleTransition;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem16TrayActionButton_h */
