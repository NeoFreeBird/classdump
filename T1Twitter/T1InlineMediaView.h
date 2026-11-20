//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1InlineMediaView_h
#define T1InlineMediaView_h
@import Foundation;

#include "T1DeadMediaErrorView.h"
#include "T1DynamicVideoAdViewModel.h"
#include "T1InlineMediaViewAudioSettings-Protocol.h"
#include "T1InlineMediaViewDelegate-Protocol.h"
#include "T1InlineMediaViewModel-Protocol.h"
#include "T1InlineMediaViewPrerollDelegate-Protocol.h"
#include "T1PrerollCTAModel.h"
#include "T1VideoAdButton.h"
#include "T1VideoBitRateManager.h"
#include "T1VideoSkipCountdownLabel.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TAVUIAutoplayable-Protocol.h"
#include "TIPImageFetchable-Protocol.h"

@class NSString, TAVPlaybackState, TAVPlayerView, TAVScribeContext, TAVUIVideoButtonOverlay, TFNButton, TFNLongPressGestureRecognizer, TFNSolidColorView, TFNTwitterAccount, TFSTimer, TIPImageContainer, TUIPillView, UIActivityIndicatorView, UIButton, UIColor, UIImage, UIImageView, UITapGestureRecognizer, UIView;

@interface T1InlineMediaView : UIView <TAVUIAutoplayable, TAVPlaybackObserver, TIPImageFetchable>

@property (readonly, nonatomic) UIView *autoplayableView;
@property (readonly, nonatomic) long long autoplayableType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *shadedOverlayContainerView;
@property (readonly, nonatomic) TFNSolidColorView *shadedOverlayColorView;
@property (readonly, nonatomic) UIView *overlayChromesContainerView;
@property (retain, nonatomic) UIActivityIndicatorView *videoLoadingIndicator;
@property (nonatomic) unsigned long long playerIconViewType;
@property (retain, nonatomic) UIView *playerIconView;
@property (nonatomic) _Bool skipAdButtonHidden;
@property (readonly, nonatomic) T1VideoAdButton *skipAdButton;
@property (nonatomic) _Bool skipCountdownLabelHidden;
@property (readonly, nonatomic) T1VideoSkipCountdownLabel *skipCountdownLabel;
@property (retain, nonatomic) UIView *playerContainerView;
@property (nonatomic) _Bool isTimePillViewHidden;
@property (retain, nonatomic) TFSTimer *timePillFadeTimer;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } pillViewTime;
@property (retain, nonatomic) T1PrerollCTAModel *ctaModel;
@property (retain, nonatomic) TFNButton *audioToggleButton;
@property (copy, nonatomic) NSString *audioToggleImageName;
@property (retain, nonatomic) T1DynamicVideoAdViewModel *adViewModel;
@property (retain, nonatomic) TUIPillView *vanityURLLabel;
@property (nonatomic) _Bool isVanityTitleEnabled;
@property (copy, nonatomic) NSString *periscopeTotalParticipants;
@property (nonatomic) _Bool isAudioPlaybackEnabled;
@property (nonatomic) _Bool suppressesAutoplayAudio;
@property (nonatomic) _Bool playbackDesired;
@property (retain, nonatomic) UIView *watchAgainButtonContainer;
@property (retain, nonatomic) TFNButton *watchAgainButton;
@property (retain, nonatomic) TAVUIVideoButtonOverlay *contentGuardOverlay;
@property (retain, nonatomic) TAVPlaybackState *previousPlaybackState;
@property (nonatomic) _Bool animatingPlayerView;
@property (readonly, nonatomic) T1VideoBitRateManager *videoBitrateManager;
@property (readonly, nonatomic) T1DeadMediaErrorView *deadMediaErrorView;
@property (retain, nonatomic) id <T1InlineMediaViewAudioSettings> audioSettings;
@property (weak, nonatomic) id <T1InlineMediaViewDelegate> delegate;
@property (weak, nonatomic) id <T1InlineMediaViewPrerollDelegate> prerollDelegate;
@property (nonatomic) unsigned long long imageState;
@property (nonatomic) unsigned long long videoState;
@property (readonly, nonatomic) UIButton *overlayButton;
@property (readonly, nonatomic) UIButton *playButton;
@property (readonly, nonatomic) TAVPlayerView *playerView;
@property (nonatomic) _Bool animateAttachment;
@property (nonatomic) _Bool viewCountEnabled;
@property (nonatomic) _Bool videoAspectFitGravityPreferred;
@property (nonatomic) long long videoLoopingBehavior;
@property (nonatomic) _Bool allowUnlimitedVideoBitrate;
@property (retain, nonatomic) id <T1InlineMediaViewModel> viewModel;
@property (copy, nonatomic) TAVScribeContext *tavScribeContext;
@property (retain, nonatomic) TFNTwitterAccount *account;
@property (nonatomic) _Bool borderHidden;
@property (nonatomic) _Bool shouldAlwaysHideOverlay;
@property (nonatomic) _Bool showingOverlay;
@property (nonatomic) double playButtonOffsetAsFractionOfViewHeight;
@property (nonatomic) _Bool playerIconViewHidden;
@property (nonatomic) struct UIOffset { double x0; double x1; } playerIconViewEdgeOffsetOverride;
@property (retain, nonatomic) UIColor *dominantBackgroundColor;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly, nonatomic) TFNLongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) TIPImageContainer *tip_fetchedImageContainer;
@property (retain, nonatomic) UIImage *tip_fetchedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)updatePreviewImageVariantSelectionWithAccount:(id)account;

/* instance methods */
- (void)attachPlayer;
- (id)_t1_attachPlayerFromCache;
- (id)_t1_getPlayerFromCache;
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame audioSettings:(id)settings;
- (id)initWithCoder:(id)coder;
- (void)addDoubleTapHandling;
- (void)removeDoubleTapHandling;
- (void)addLongPressHandling;
- (void)setTip_fetchHelperIfUsedAsImageView:(id)view;
- (void)setTip_fetchHelper:(id)helper;
- (id)tip_fetchHelper;
- (void)setContentMode:(long long)mode;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)attachPlayerViewAnimated:(_Bool)animated;
- (void)detachPlayerViewAnimated:(_Bool)animated;
- (_Bool)_t1_isMediaOwnerForDeadMedia:(id)media;
- (void)_t1_showDeadMediaErrorViewWithAvailabilityReason:(id)reason isMediaOwner:(_Bool)owner copyrightHolderName:(id)name;
- (void)_t1_hideDeadMediaErrorView;
- (_Bool)_isAutoplaying;
- (_Bool)isPlaybackSourceLive;
- (void)_t1_videoBitrateManagerDidUpdatePreferredBitrate:(id)bitrate;
- (void)_t1_updatePreviewVisibility;
- (void)_t1_updateAudioForState:(id)state;
- (void)_t1_updateAudioToggleButtonForMediaWithAudio:(_Bool)audio isMuted:(_Bool)muted;
- (void)_t1_updateAudioToggleIconForMuted:(_Bool)muted;
- (void)_t1_setAudioToggleVisible:(_Bool)visible;
- (void)_t1_handleAudioToggleTap:(id)tap;
- (_Bool)_t1_shouldPlayAudio;
- (void)_t1_setAudioPlaybackEnabled:(_Bool)enabled;
- (void)_t1_startTimePillFadeTimer;
- (void)_t1_hidePillViewAnimated;
- (_Bool)isShowingOverlay;
- (void)_t1_showPlay:(_Bool)play showWatchAgain:(_Bool)again animated:(_Bool)animated;
- (void)_t1_initializeWatchAgainButtonIfNecessary;
- (void)_t1_initializeContentGuardWithThreshold:(struct { long long x0; int x1; unsigned int x2; long long x3; })threshold;
- (void)_t1_handleTap:(id)tap event:(id)event;
- (id)_t1_buttonImageSize:(struct CGSize { double x0; double x1; })size;
- (void)_t1_updateButtonImage;
- (void)_t1_initializeSkipAdButton;
- (void)_t1_showSkipButtonWithCurrentPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)pillView;
- (void)_t1_updateAdPillViewWithCurrentPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time adDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration playbackState:(id)state;
- (void)_t1_updateSkipCountDownLabelWithCurrentPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration skipAdDurationRequirement:(struct { long long x0; int x1; unsigned int x2; long long x3; })requirement;
- (_Bool)_t1_shouldRenderAdByAdvertiserNameWithPlaylistItem:(id)item;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_layoutSkipAdButton;
- (void)_layoutVanityURLLabel;
- (void)_layoutSkipCountDownLabel;
- (void)_layoutPlayerIconView;
- (void)t1_layoutBrandPill:(id)pill;
- (void)_t1_beginPresentingPlayer:(id)player playerSessionProducer:(id)producer;
- (_Bool)playerIsDetached;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)observerDidDetachFromPlayer:(id)player;
- (void)observerDidAttachToPlayer:(id)player;
- (void)play;
- (void)pause;
- (void)_t1_updatePlayerViewWithDetachedPlayerState:(id)state;
- (void)_t1_updateWithPlaybackState:(id)state;
- (void)_t1_prerollDidEnd;
- (_Bool)_t1_prerollAdHasCTAForState:(id)state;
- (void)_t1_handleAdPrerollTransitionForState:(id)state;
- (id)_t1_tavPlayerViewConfigurationForItem:(id)item;
- (void)cleanup;
- (void)restartAnimationsIfNeeded;
- (void)setBackgroundColor:(id)color;
- (void)_t1_initializeSkipCountdownLabel;
- (void)_t1_tapAction;
- (void)_t1_doubleTapAction;
- (void)_t1_longPressAction;
- (_Bool)isViewCountEnabled;
- (_Bool)isVideoAspectFitGravityPreferred;
- (_Bool)isBorderHidden;
- (_Bool)isPlayerIconViewHidden;

@end

#endif /* T1InlineMediaView_h */
