//
#ifndef _TtC4DMUI14InboxSearchBar_h
#define _TtC4DMUI14InboxSearchBar_h
@import Foundation;

#include "TFNGlassFillingNavigationBarTitleView-Protocol.h"

@class UIView, _$s13XDesignSystem13SearchCapsuleCMn ?, _$s13XDesignSystem5InputCMn, _$sySScSg;

@interface DMUI.InboxSearchBar : UIView <TFNGlassFillingNavigationBarTitleView> { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onSearchTextChanged;
    nominal type descriptor for XDesignSystem.Input input;
    nominal type descriptor for XDesignSystem.SearchCapsule ? capsule;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) _Bool isFirstResponder;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC4DMUI14InboxSearchBar_h */
