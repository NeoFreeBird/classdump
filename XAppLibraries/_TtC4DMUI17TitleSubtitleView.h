//
#ifndef _TtC4DMUI17TitleSubtitleView_h
#define _TtC4DMUI17TitleSubtitleView_h
@import Foundation;

#include "_TtC4DMUI15PassthroughView.h"

@class _$s12CoreGraphics7CGFloatVMn, _$sSo7UILabelCSg;

@interface DMUI.TitleSubtitleView : DMUI.PassthroughView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat spacing;
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.UILabel? $__lazy_storage_$_subtitleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC4DMUI17TitleSubtitleView_h */
