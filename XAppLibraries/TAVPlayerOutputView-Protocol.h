//
#ifndef TAVPlayerOutputView_Protocol_h
#define TAVPlayerOutputView_Protocol_h
@import Foundation;

#include "TAVCaptionSource-Protocol.h"
#include "TAVPixelBufferSource-Protocol.h"

@class AVPictureInPictureController;

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
