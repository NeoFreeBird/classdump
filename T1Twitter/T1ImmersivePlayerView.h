//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ImmersivePlayerView_h
#define T1ImmersivePlayerView_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"
#include "TAVPlayerViewZoomDelegate-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class UIView;

@interface T1ImmersivePlayerView : UIView <TAVPlayerViewZoomDelegate, TUIImageViewFetchHelperDelegate, TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *imagePipeline;
    NSNumber"16@0:8 *videoPlayerView;
    NSNumber"16@0:8 *internalState;
    NSNumber"16@0:8 *fetchHelper;
    NSNumber"16@0:8 *previewImageView;
    NSNumber"16@0:8 *externalPlaybackOverlayView;
    NSNumber"16@0:8 *mediaLoadingView;
    NSNumber"16@0:8 *videoSettingsCoordinator;
    NSNumber"16@0:8 *contentView;
    NSNumber"16@0:8 *lastObservedPlaybackState;
    NSNumber"16@0:8 *lastIsReadyForDisplay;
    NSNumber"16@0:8 *playerSessionProducer;
    NSNumber"16@0:8 *tavPlayerHolder;
    NSNumber"16@0:8 *onVideoRotationAnimation;
    NSNumber"16@0:8 *onStartSpinnerAnimation;
    NSNumber"16@0:8 *topAlignmentMultiplier;
    NSNumber"16@0:8 *delegate;
}

/* instance methods */
- (void)playerViewDidBeginZooming:(id)zooming;
- (void)playerViewDidZoom:(id)zoom atScale:(double)scale;
- (void)playerViewDidEndZooming:(id)zooming atScale:(double)scale gravity:(long long)gravity;
- (void)tui_fetchHelper:(id)helper didLoadInitialImageFromSource:(long long)source;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1ImmersivePlayerView_h */
