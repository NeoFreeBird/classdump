//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor25VideoCaptionsTrackingView_h
#define _TtC12XVideoEditor25VideoCaptionsTrackingView_h
@import Foundation;

@class UIView, _$sSo12CAShapeLayerC;

@interface XVideoEditor.VideoCaptionsTrackingView : UIView { // (Swift)
    /* instance variables */
    __C.CAShapeLayer _borderLayer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* _TtC12XVideoEditor25VideoCaptionsTrackingView_h */
