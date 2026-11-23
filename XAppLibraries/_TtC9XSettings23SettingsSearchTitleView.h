//
#ifndef _TtC9XSettings23SettingsSearchTitleView_h
#define _TtC9XSettings23SettingsSearchTitleView_h
@import Foundation;

#include "TFNControlHostingNavigationBarTitleView-Protocol.h"
#include "TFNGlassFillingNavigationBarTitleView-Protocol.h"

@class UIView, _$s13XDesignSystem13SearchCapsuleCMn ?, _$s13XDesignSystem5InputCMn, _$sSN -> _$s12CoreGraphics7CGFloatVMn ?, _$sSo6UIViewCSg;

@interface XSettings.SettingsSearchTitleView : UIView <TFNControlHostingNavigationBarTitleView, TFNGlassFillingNavigationBarTitleView> { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.Input searchField;
    __C.UIView? fieldBase;
    nominal type descriptor for XDesignSystem.SearchCapsule ? capsule;
    Swift.ClosedRange -> nominal type descriptor for CoreGraphics.CGFloat ? fieldSpanInWindow;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC9XSettings23SettingsSearchTitleView_h */
