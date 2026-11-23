//
#ifndef TweetBackgroundTAVPlayerOutputView_h
#define TweetBackgroundTAVPlayerOutputView_h
@import Foundation;

#include "TAVOutputViewHosting-Protocol.h"
#include "TAVPlayerOutputView-Protocol.h"

@class AVPictureInPictureController, NSString, TAVPlayer, TAVPlayerViewConfiguration, TAVScribeContext, UIView;
@protocol TAVCaptionSource, TAVPixelBufferSource;

@interface TweetBackgroundTAVPlayerOutputView : UIView <TAVPlayerOutputView, TAVOutputViewHosting> {
    /* instance variables */
    TAVScribeContext *_scribeContext;
    TAVPlayer *_player;
}

@property (copy, nonatomic) TAVPlayerViewConfiguration *configuration;
@property (retain, nonatomic) id <TAVPixelBufferSource> pixelBufferSource;
@property (retain, nonatomic) id <TAVCaptionSource> captionSource;
@property (retain, nonatomic) AVPictureInPictureController *avPictureInPictureController;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoFrame;
@property (readonly, nonatomic) _Bool isReadyForDisplay;
@property (copy, nonatomic) id /* block */ presentationSizeUpdateBlock;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } presentationSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScribeContext:(id)context;
- (void)keepCurrentlyDisplayedFrameUntilNextRender;
- (void)player:(id)player didChangeToOutputView:(id)view;
- (void)playerWillChangeOutputHost:(id)host;
- (id)presentationStateForPlayer:(id)player;
- (void)playerWasDeallocated;

@end

#endif /* TweetBackgroundTAVPlayerOutputView_h */
