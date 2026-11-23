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
