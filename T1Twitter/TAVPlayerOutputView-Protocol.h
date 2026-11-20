//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlayerOutputView_Protocol_h
#define TAVPlayerOutputView_Protocol_h
@import Foundation;

@class AVPictureInPictureController;
@protocol TAVCaptionSource, TAVPixelBufferSource;

@protocol TAVPlayerOutputView

@required

@property (nonatomic, retain) id <TAVPixelBufferSource> pixelBufferSource;
@property (nonatomic, retain) id <TAVCaptionSource> captionSource;
@property (nonatomic, retain) AVPictureInPictureController *avPictureInPictureController;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoFrame;
@property (nonatomic, readonly) _Bool isReadyForDisplay;
@property (nonatomic, copy) id /* block */ presentationSizeUpdateBlock;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } presentationSize;

/* required instance methods */
- (void)keepCurrentlyDisplayedFrameUntilNextRender;

@optional

@end

#endif /* TAVPlayerOutputView_Protocol_h */
