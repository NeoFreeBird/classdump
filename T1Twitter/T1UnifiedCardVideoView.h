//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UnifiedCardVideoView_h
#define T1UnifiedCardVideoView_h
@import Foundation;

#include "T1InlineMediaView.h"
#include "T1InlineMediaViewDelegate-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TUCVideoView-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class NSString, TAVPlaybackState, TUCMediaComponentViewModel, UIImage, UIView;
@protocol TUCImageViewLoadDelegate, TUCVideoViewDelegate;

@interface T1UnifiedCardVideoView : UIView <T1InlineMediaViewDelegate, TAVPlaybackObserver, TUIImageViewFetchHelperDelegate, TUCVideoView>

@property (retain, nonatomic) T1InlineMediaView *inlineMediaView;
@property (retain, nonatomic) TUCMediaComponentViewModel *mediaViewModel;
@property (nonatomic) _Bool shouldAlwaysHideOverlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id <TUCVideoViewDelegate> delegate;
@property (readonly, nonatomic) TAVPlaybackState *playbackState;
@property (nonatomic) _Bool shouldLoopVideo;
@property (nonatomic) _Bool hideVanity;
@property (nonatomic) _Bool trimVanityZeroWidthCharacters;
@property (readonly, nonatomic) UIImage *image;
@property (retain, nonatomic) id <TUCImageViewLoadDelegate> loadDelegate;

/* instance methods */
- (id)initWithAccount:(id)account scribeContext:(id)context;
- (void)play;
- (void)reset;
- (id)autoplayable;
- (id)previewImage;
- (void)setImageWithMediaEntity:(id)entity imagePipeline:(id)pipeline;
- (void)tui_fetchHelper:(id)helper didUpdateImageFromSource:(long long)source isFinal:(_Bool)final;
- (void)tui_fetchHelper:(id)helper readyToConfigureView:(id)view state:(long long)state;
- (_Bool)inlineMediaViewShouldShowVideoDetailsInOverlay:(id)overlay;
- (void)inlineMediaViewWasTapped:(id)tapped withEvent:(id)event;
- (void)mediaView:(id)view willPresentPlayerView:(id)view;
- (void)mediaView:(id)view didDetachPlayerView:(id)view;
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@end

#endif /* T1UnifiedCardVideoView_h */
