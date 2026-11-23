//
#ifndef _TtC8Payments27ActivateCardNoticeVideoView_h
#define _TtC8Payments27ActivateCardNoticeVideoView_h
@import Foundation;

@class UIView, _$s10Foundation21NSKeyValueObservationCMn ?, _$s12CoreGraphics7CGFloatVMn, _$sSo8AVPlayerC;

@interface Payments.ActivateCardNoticeVideoView : UIView { // (Swift)
    /* instance variables */
    __C.AVPlayer player;
    nominal type descriptor for CoreGraphics.CGFloat aspectRatio;
    nominal type descriptor for Foundation.NSKeyValueObservation ? readyForDisplayObservation;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC8Payments27ActivateCardNoticeVideoView_h */
