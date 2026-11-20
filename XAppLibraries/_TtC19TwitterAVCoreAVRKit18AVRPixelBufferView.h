//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19TwitterAVCoreAVRKit18AVRPixelBufferView_h
#define _TtC19TwitterAVCoreAVRKit18AVRPixelBufferView_h
@import Foundation;

@class UIView, _$sSd, _$sSo7CALayerC, __C.CVBuffer ?;

@interface TwitterAVCoreAVRKit.AVRPixelBufferView : UIView { // (Swift)
    /* instance variables */
    __C.CALayer _contentLayer;
    __C.CVBuffer ? pixelBuffer;
    Swift.Double rotationDegrees;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end

#endif /* _TtC19TwitterAVCoreAVRKit18AVRPixelBufferView_h */
