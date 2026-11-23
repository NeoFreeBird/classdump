//
#ifndef TAVAnonymousPlayerOutputView_h
#define TAVAnonymousPlayerOutputView_h
@import Foundation;

#include "TAVCaptionSource-Protocol.h"
#include "TAVPixelBufferSource-Protocol.h"
#include "TAVPlayerOutputView-Protocol.h"

@class AVPictureInPictureController, UILayoutGuide, UIView;

@interface TAVAnonymousPlayerOutputView : UIView <TAVPlayerOutputView> {
    /* instance variables */
    struct CGSize { double width; double height; } _customPresentationSize;
    UILayoutGuide *_videoLayoutGuide;
}

@property (retain, nonatomic) id <TAVPixelBufferSource> pixelBufferSource;
@property (retain, nonatomic) id <TAVCaptionSource> captionSource;
@property (retain, nonatomic) AVPictureInPictureController *avPictureInPictureController;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoFrame;
@property (readonly, nonatomic) _Bool isReadyForDisplay;
@property (copy, nonatomic) id /* block */ presentationSizeUpdateBlock;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } presentationSize;

/* instance methods */
- (void)keepCurrentlyDisplayedFrameUntilNextRender;
- (id)initWithAnonymousView:(id)view presentationSize:(struct CGSize { double x0; double x1; })size;

@end

#endif /* TAVAnonymousPlayerOutputView_h */
