//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlayerView_h
#define TAVPlayerView_h
@import Foundation;

#include "TAVCaptionContainerView.h"
#include "TAVCaptionSink-Protocol.h"
#include "TAVErrorLabel.h"
#include "TAVOutputViewHosting-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TAVPlaybackState.h"
#include "TAVPlayer.h"
#include "TAVPlayerOutputGestureDelegateProxy.h"
#include "TAVPlayerOutputView-Protocol.h"
#include "TAVPlayerView-Protocol.h"
#include "TAVPlayerViewConfiguration.h"
#include "TAVPlayerViewDebugOverlay.h"
#include "TAVPlayerViewZoomContext.h"
#include "_TtC14XGravityLayout24XGravityLayoutController.h"

@class NSHashTable, NSLayoutConstraint, NSString, UIColor, UIImpactFeedbackGenerator, UILayoutGuide, UIView;
@protocol TAVPlayerViewZoomDelegate;

@interface TAVPlayerView : UIView <TAVOutputViewHosting, TAVPlaybackObserver, TAVPlayerView> {
    /* instance variables */
    TAVPlayerOutputGestureDelegateProxy *_gestureDelegateProxy;
    UIImpactFeedbackGenerator *_zoomHaptic;
    double _rotation;
    NSLayoutConstraint *_videoGuideLeadingConstraint;
    NSLayoutConstraint *_videoGuideTopConstraint;
    NSLayoutConstraint *_videoGuideWidthConstraint;
    NSLayoutConstraint *_videoGuideHeightConstraint;
}

@property (retain, nonatomic) TAVPlayerViewDebugOverlay *debugOverlay;
@property (retain, nonatomic) UIView *debugOutlineView;
@property (retain, nonatomic) UIView *debugZoomCenterOutputView;
@property (retain, nonatomic) UIView *debugZoomCenterView;
@property (readonly, nonatomic) NSHashTable *weakObservers;
@property (retain, nonatomic) NSLayoutConstraint *captionContainerTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *captionContainerBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *captionContainerLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *captionContainerTrailingConstraint;
@property (retain, nonatomic) TAVPlayerViewZoomContext *zoomContext;
@property (retain, nonatomic) XGravityLayout.XGravityLayoutController *gravityLayout;
@property (nonatomic) _Bool isNativePIPRestoring;
@property (nonatomic) _Bool isNativePIPStarting;
@property (nonatomic) _Bool isNativePIPStopScheduled;
@property (nonatomic) _Bool stopsNativePIPWhenStarted;
@property (nonatomic) _Bool awaitsNativePIPStopAcknowledgement;
@property (retain, nonatomic) UIView<TAVPlayerOutputView> *outputView;
@property (retain, nonatomic) TAVErrorLabel *errorLabel;
@property (retain, nonatomic) TAVCaptionContainerView *captionContainerView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleCaptionFrameInView;
@property (weak, nonatomic) id <TAVPlayerViewZoomDelegate> zoomDelegate;
@property (retain, nonatomic) UIColor *videoBackgroundColor;
@property (nonatomic) double outputViewCornerRadius;
@property (nonatomic) unsigned long long outputViewMaskedCorners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) TAVPlayer *player;
@property (weak, nonatomic) TAVPlayer *associatedPlayer;
@property (copy, nonatomic) TAVPlayerViewConfiguration *configuration;
@property (weak, nonatomic) id <TAVCaptionSink> captionSink;
@property (readonly, nonatomic) _Bool isReadyForDisplay;
@property (readonly, nonatomic) UILayoutGuide *videoLayoutGuide;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } outputFrame;
@property (readonly, nonatomic) TAVPlaybackState *playbackState;

/* class methods */
+ (_Bool)debugOutlinesEnabled;
+ (void)setDebugOutlinesEnabled:(_Bool)enabled;
+ (_Bool)debugZoomCenterMarkEnabled;
+ (void)setDebugZoomCenterMarkEnabled:(_Bool)enabled;
+ (_Bool)debugOverlaysEnabled;
+ (void)setDebugOverlaysEnabled:(_Bool)enabled;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outputFrameForNaturalSize:(struct CGSize { double x0; double x1; })size boundsSize:(struct CGSize { double x0; double x1; })size videoGravity:(long long)gravity;

/* instance methods */
- (void)tav_updateNativePictureInPictureForCurrentConfiguration;
- (void)tav_handlePictureInPicturePlaybackStateUpdateFromState:(id)state toState:(id)state;
- (_Bool)outputViewHostIsNativePictureInPicturePossible:(id)possible;
- (void)outputViewHostStartNativePictureInPicture:(id)picture;
- (void)outputViewHostStopNativePictureInPicture:(id)picture;
- (_Bool)outputViewHostIsNativePictureInPictureActive:(id)active;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)picture;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)picture;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)picture;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)picture;
- (void)pictureInPictureController:(id)controller failedToStartPictureInPictureWithError:(id)error;
- (void)pictureInPictureController:(id)controller restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)handler;
- (_Bool)tav_shouldAllowNativePictureInPictureForBehavior:(long long)behavior;
- (_Bool)tav_isNativePictureInPicturePossible;
- (_Bool)tav_isNativePictureInPictureActive;
- (void)tav_startNativePictureInPicture;
- (void)tav_stopNativePictureInPicture;
- (void)tav_performNativePictureInPictureStop;
- (void)tav_installExternallyOwnedPictureInPictureController;
- (void)tav_uninstallExternallyOwnedPictureInPictureController;
- (void)tav_setupPictureInPictureControllerIfNeeded;
- (void)tav_clearPictureInPictureController;
- (void)tav_syncStateForDetachedPictureInPictureControllerWasActive:(_Bool)active;
- (void)tav_setPlayerRenderingSuppressed:(_Bool)suppressed;
- (void)private_applyOutputViewCornerRadius;
- (void)addPlaybackObserver:(id)observer;
- (void)removePlaybackObserver:(id)observer;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })private_videoFrame;
- (void)handlePinch:(id)pinch;
- (void)handleZoomPan:(id)pan;
- (void)resetZoom;
- (id)initWithCoder:(id)coder;
- (id)initWithCoder:(id)coder configuration:(id)configuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame configuration:(id)configuration;
- (void)prepareForInterfaceBuilder;
- (void)player:(id)player didChangeToOutputView:(id)view;
- (void)playerWasDeallocated;
- (void)playerWillChangeOutputHost:(id)host;
- (id)presentationStateForPlayer:(id)player;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)player:(id)player didOutputTXXXFrameWithDescription:(id)description value:(id)value;
- (void)observerDidDetachFromPlayer:(id)player;
- (void)observerDidAttachToPlayer:(id)player;
- (void)private_commonInit;
- (void)private_applyConfiguration;
- (void)private_updateDebugViews;
- (void)rotateVideoWithRotation:(double)rotation;
- (void)private_applyConfigurationToCurrentPlayerOutputView;
- (void)private_updateCaptionConfiguration;
- (void)private_buildCaptionContainerViewIfNeeded;
- (double)private_visibilityRatioForPlayer:(id)player;
- (void)dealloc;

@end

#endif /* TAVPlayerView_h */
