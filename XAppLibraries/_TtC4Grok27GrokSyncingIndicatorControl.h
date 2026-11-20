//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok27GrokSyncingIndicatorControl_h
#define _TtC4Grok27GrokSyncingIndicatorControl_h
@import Foundation;

@class UIControl, _$s13XDesignSystem11PressEffectCMn ?, _$sSo23UIActivityIndicatorViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface Grok.GrokSyncingIndicatorControl : UIControl { // (Swift)
    /* instance variables */
    __C.UIView contentView;
    __C.UIActivityIndicatorView spinner;
    __C.UILabel label;
    nominal type descriptor for XDesignSystem.PressEffect ? $__lazy_storage_$_pressEffect;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (_Bool)isHighlighted;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC4Grok27GrokSyncingIndicatorControl_h */
