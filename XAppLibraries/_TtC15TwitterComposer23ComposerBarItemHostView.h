//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC15TwitterComposer23ComposerBarItemHostView_h
#define _TtC15TwitterComposer23ComposerBarItemHostView_h
@import Foundation;

@class Swift.Bool, TwitterComposer.ComposerBarItemAppearance ?, UIView, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC;

@interface TwitterComposer.ComposerBarItemHostView : UIView { // (Swift)
    /* instance variables */
    __C.UIView button;
    Swift.Bool pinsTrailingEdge;
    TwitterComposer.ComposerBarItemAppearance ? $__lazy_storage_$_barAppearance;
    __C.NSLayoutConstraint? $__lazy_storage_$_horizontalPin;
    __C.NSLayoutConstraint? $__lazy_storage_$_minimumWidth;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC15TwitterComposer23ComposerBarItemHostView_h */
