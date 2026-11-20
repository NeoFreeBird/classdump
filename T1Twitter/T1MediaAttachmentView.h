//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1MediaAttachmentView_h
#define T1MediaAttachmentView_h
@import Foundation;

#include "T1AnimatedGIFImageView.h"
#include "T1MediaAttachmentBadgeView.h"
#include "T1MediaAttachmentPlayerView-Protocol.h"
#include "T1MediaAttachmentProgressView.h"
#include "T1MediaAttachmentViewDelegate-Protocol.h"
#include "T1MediaAttachmentViewRenderingDelegate-Protocol.h"
#include "T1VoiceView.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TFNAnimatedGifImageViewDelegate-Protocol.h"

@class NSString, TAVPlayer, TFNTwitterAccount, TIPImagePipeline, TTMAsset, UIImage, UIImageView, UIView;

@interface T1MediaAttachmentView : UIView <TFNAnimatedGifImageViewDelegate, TAVPlaybackObserver, T1MediaAttachmentViewRenderingDelegate>

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) T1AnimatedGIFImageView *gifView;
@property (readonly, nonatomic) UIView<T1MediaAttachmentPlayerView> *playerView;
@property (retain, nonatomic) TAVPlayer *player;
@property (readonly, nonatomic) UIView *dimmingOverlayView;
@property (readonly, nonatomic) T1MediaAttachmentProgressView *attachmentProgressView;
@property (nonatomic) _Bool showsAttachmentProgressView;
@property (nonatomic) double attachmentProgress;
@property (nonatomic) _Bool attachmentProgressFailed;
@property (readonly, nonatomic) UIImageView *playIconView;
@property (readonly, nonatomic) T1MediaAttachmentBadgeView *attachmentBadgeView;
@property (retain, nonatomic) T1VoiceView *voiceView;
@property (nonatomic) int requestID;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TTMAsset *attachment;
@property (weak, nonatomic) id <T1MediaAttachmentViewDelegate> delegate;
@property (weak, nonatomic) id <T1MediaAttachmentViewRenderingDelegate> renderingDelegate;
@property (nonatomic) _Bool badgeHidden;
@property (nonatomic) double badgeAlpha;
@property (nonatomic) double badgeMarginLength;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBadgeFrame;
@property (readonly, nonatomic) UIImage *displayedImage;
@property (nonatomic) _Bool playIconHidden;
@property (nonatomic) _Bool progressViewHidden;
@property (readonly, nonatomic) _Bool animating;
@property (readonly, nonatomic) _Bool playing;
@property (nonatomic) _Bool muted;
@property (nonatomic) _Bool allowsLocalVideoInlinePlayback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)beginPlaybackRelay;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })playbackRelayTime;
- (void)endPlaybackRelay;
- (void)resumePlaybackAtTime:(double)time;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)_t1_mediaAttachmentView_initialize;
- (void)_t1_mediaAttachmentView_installPlayerViewWithFeatureSwitches:(id)switches;
- (void)layoutSubviews;
- (void)setAttachment:(id)attachment animated:(_Bool)animated;
- (_Bool)isBadgeHidden;
- (_Bool)isAnimating;
- (void)startAnimating;
- (void)stopAnimating;
- (void)stopAnimatingAtEndOfLoop;
- (_Bool)isPlaying;
- (void)startPlaying;
- (void)stopPlaying;
- (void)stopUpdating;
- (void)_updateAttachmentProgressViewState;
- (void)_updateAttachmentAnimated:(_Bool)animated;
- (void)_updatePlayIconView;
- (void)_updateImageAnimated:(_Bool)animated;
- (void)_updateImageWithFoundMediaAttachment:(id)attachment;
- (void)_updateImageWithAnimatedImageAttachment:(id)attachment animated:(_Bool)animated;
- (void)_updateImageWithAttachment:(id)attachment animated:(_Bool)animated;
- (void)_setProgressWithRequestID:(int)id progress:(double)progress error:(id)error;
- (void)_updateDurationBadge;
- (void)_setImage:(id)image;
- (void)_setPreviewAnimatedGIFImage:(id)gifimage;
- (void)_setFullAnimatedGIFImage:(id)gifimage;
- (void)_setAnimatedGIFImage:(id)gifimage;
- (void)_updateAnimatedGIFImageView;
- (_Bool)_isLocalInlinePlayableAttachment:(id)attachment;
- (_Bool)_isInlinePlayableAttachment;
- (unsigned long long)_previewPlayerAutoPlayOptions;
- (void)_loadLocalVideoMediaURLForAttachment:(id)attachment completion:(id /* block */)completion;
- (void)_updatePlayerView;
- (void)_setPlayerWithMediaURL:(id)url attachment:(id)attachment;
- (void)_didSetPlayerWithAutoPlayOptions:(unsigned long long)options;
- (void)_updateVoiceView;
- (void)attachmentView:(id)view renderPreviewFoundMediaAttachment:(id)attachment withOptions:(id)options firstFrameImageCompletion:(id /* block */)completion completion:(id /* block */)completion;
- (void)attachmentView:(id)view renderAnimatedImageAttachment:(id)attachment withOptions:(id)options completion:(id /* block */)completion;
- (void)attachmentView:(id)view renderPreviewPlayerMediaMediaAsset:(id)asset withOptions:(id)options completion:(id /* block */)completion;
- (void)attachmentView:(id)view renderAttachment:(id)attachment withOptions:(id)options completion:(id /* block */)completion;
- (void)animatedGifImageViewDidFinishLooping:(id)looping;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (_Bool)isPlayIconHidden;
- (_Bool)isProgressViewHidden;
- (_Bool)isMuted;

@end

#endif /* T1MediaAttachmentView_h */
