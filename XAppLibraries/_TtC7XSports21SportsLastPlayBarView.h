//
#ifndef _TtC7XSports21SportsLastPlayBarView_h
#define _TtC7XSports21SportsLastPlayBarView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.SportsImageLoader ?, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn width_Si5linestSg, _$s13XDesignSystem4BlurCMn, _$sSi, _$sSo11UIImageViewC, _$sSo6UIViewCSg, _$sSo7UILabelC;

@interface XSports.SportsLastPlayBarView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat accessoryHeight;
    Swift.Int maximumSentenceLines;
    Swift.Bool reservesMaximumSentenceLines;
    Swift.Bool showsBackground;
    __C.UILabel headlineLabel;
    nominal type descriptor for XDesignSystem.Blur blurView;
    __C.UIImageView markImageView;
    __C.UILabel tagLabel;
    __C.UILabel sentenceLabel;
    __C.UIView? accessoryView;
    nominal type descriptor for CoreGraphics.CGFloat width_Si5linestSg cachedSentenceLines;
    XSports.SportsImageLoader ? $__lazy_storage_$_logoLoader;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports21SportsLastPlayBarView_h */
