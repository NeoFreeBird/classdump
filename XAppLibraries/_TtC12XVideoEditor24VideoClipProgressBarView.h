//
#ifndef _TtC12XVideoEditor24VideoClipProgressBarView_h
#define _TtC12XVideoEditor24VideoClipProgressBarView_h
@import Foundation;

@class UIControl, _$sSd, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XVideoEditor.VideoClipProgressBarView : UIControl { // (Swift)
    /* instance variables */
    Swift.Double duration;
    Swift.Double progress;
    __C.UILabel timeLabel;
    __C.UIView trackView;
    __C.UIView fillView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (_Bool)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (_Bool)continueTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)cancelTrackingWithEvent:(id)event;

@end

#endif /* _TtC12XVideoEditor24VideoClipProgressBarView_h */
