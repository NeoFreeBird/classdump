//
#ifndef _TtC11XNavigation28NavigationBarSearchFieldView_h
#define _TtC11XNavigation28NavigationBarSearchFieldView_h
@import Foundation;

@class Swift.Bool, UIView, XDesignSystem.Input, XDesignSystem.SearchCapsule, XNavigation.NavigationBarSearch, _$sSo22UITapGestureRecognizerCSg, _$sSo7UIColorCSg, __C.CGRect ?;

@interface XNavigation.NavigationBarSearchFieldView : UIView { // (Swift)
    /* instance variables */
    XNavigation.NavigationBarSearch search;
    XDesignSystem.SearchCapsule capsule;
    XDesignSystem.Input input;
    __C.UITapGestureRecognizer? $__lazy_storage_$_tapRecognizer;
    __C.UIColor? capsuleFill;
    Swift.Bool hasRendered;
    Swift.Bool holdsText;
    __C.CGRect ? morphFrame;
}

@property (nonatomic, readonly) _Bool isFirstResponder;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (_Bool)resignFirstResponder;
- (void)handleTap;
- (_Bool)accessibilityActivate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XNavigation28NavigationBarSearchFieldView_h */
