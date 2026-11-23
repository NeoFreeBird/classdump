//
#ifndef PTVTwitterMediaPreviewView_h
#define PTVTwitterMediaPreviewView_h
@import Foundation;

#include "OS_dispatch_source-Protocol.h"

@class AVAsset, AVMutableVideoComposition, AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, AVPlayerLayer, NSMutableArray, NSObject, NSTimer, NSURL, UIImage, UIImageView, UIView;
@protocol OS_dispatch_queue, PTVTwitterMediaPreviewViewDelegate;

@interface PTVTwitterMediaPreviewView : UIView {
    /* instance variables */
    AVPlayerItemVideoOutput *_avPlayerItemVideoOutput;
    UIView *_playerView;
    AVPlayerLayer *_playerLayer;
    id _videoLoopObserver;
    _Bool _softwareMute;
    UIImageView *_previewPhotoImageView;
    NSMutableArray *_previousBlurredVideoBackgroundViews;
    UIView *_backgroundView;
    _Bool _shouldResumePlaybackAfterBackgrounding;
    NSObject<OS_dispatch_queue> *_playbackWatcherQueue;
    NSObject<OS_dispatch_source> *_playbackWatchTimer;
    _Bool _isObservingPlayer;
    PTVTwitterMediaPreviewView *_weakSelf;
}

@property (retain, nonatomic) NSTimer *imageCaptureTimer;
@property (nonatomic) _Bool isBackgrounded;
@property (weak, nonatomic) id <PTVTwitterMediaPreviewViewDelegate> captureDelegate;
@property (weak, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (retain, nonatomic) AVMutableVideoComposition *videoComposition;
@property (nonatomic) _Bool backgroundBlurDisabled;
@property (readonly, nonatomic) _Bool isPlaying;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)dealloc;
- (void)ptv_removePreviousView;
- (void)ptv_createVideoPlayerViews;
- (void)ptv_notifyDelegatOnIsReadyToPlay:(_Bool)play;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)removeLoopingRange;
- (void)setVideoRange:(double)range duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)togglePlay;
- (void)play;
- (void)playFromStart:(_Bool)start;
- (void)pause;
- (void)muteAudio:(_Bool)audio;
- (void)setVolume:(float)volume;
- (void)applicationWillResignActive:(id)active;
- (void)applicationDidBecomeActive:(id)active;
- (void)ptv_setPhotoPreviewImage:(id)image;
- (void)ptv_startCapturingStillImagesOfVideoPlayer;
- (void)ptv_stopCapturingStillImagesOfVideoPlayer;
- (void)ptv_captureInitialThumbnailFromAsset:(id)asset;
- (void)ptv_captureVideoPlayerThumbnail;
- (void)ptv_didCaptureThumbnail:(id)thumbnail;
- (void)_showBlurredBackgroundImage:(id)image duration:(double)duration;
- (id)ptv_createTransitionBackgroundBlurView;
- (_Bool)isBackgroundBlurDisabled;

@end

#endif /* PTVTwitterMediaPreviewView_h */
