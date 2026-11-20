//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVRInternalRenderView_Protocol_h
#define AVRInternalRenderView_Protocol_h
@import Foundation;

@protocol AVRInternalRenderView

@required

/* required instance methods */
- (void)captureStillImageWithPixelBuffer:(struct __CVBuffer *)buffer completion:(id /* block */)completion;
- (void)renderWithPixelBuffer:(struct __CVBuffer *)buffer state:(id)state;

@optional

@end

#endif /* AVRInternalRenderView_Protocol_h */
