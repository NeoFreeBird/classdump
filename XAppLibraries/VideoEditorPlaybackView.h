//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef VideoEditorPlaybackView_h
#define VideoEditorPlaybackView_h
@import Foundation;

#include "TAVPlaybackObservable-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TAVPlaybackState.h"
#include "TAVPlayerViewConfiguration.h"

@class UIView;

@interface VideoEditorPlaybackView : UIView <TAVPlaybackObserver, TAVPlaybackObservable> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 _playerView;
    @40@0:8:16@24@32 _player;
    @40@0:8:16@24@32 _asset;
    @40@0:8:16@24@32 _generation;
    @40@0:8:16@24@32 _compositeFilter;
    @40@0:8:16@24@32 _startTime;
    @40@0:8:16@24@32 _endTime;
    @40@0:8:16@24@32 _prefersLooping;
    @40@0:8:16@24@32 renderRequestBlock;
}

@property (nonatomic, retain) TAVPlayerViewConfiguration *configuration;
@property (nonatomic, readonly) TAVPlaybackState *playbackState;

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame configuration:(id)configuration;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)addPlaybackObserver:(id)observer;
- (void)removePlaybackObserver:(id)observer;
- (void)associatePlayerWithMediaURL:(id)url attachment:(id)attachment autoPlayOptions:(unsigned long long)options features:(id)features completion:(id /* block */)completion;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* VideoEditorPlaybackView_h */
