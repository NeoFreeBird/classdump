//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADVideoPlayerView_h
#define GADVideoPlayerView_h
@import Foundation;

#include "GADObserverCollection.h"
#include "GADVideoPlayer.h"

@class AVPlayerLayer, UIView;

@interface GADVideoPlayerView : UIView {
    /* instance variables */
    GADVideoPlayer *_player;
    AVPlayerLayer *_playerLayer;
    GADObserverCollection *_didActivateObservers;
}

/* instance methods */
- (void)setUpWithPlayer:(id)player;
- (void)resetPlayerLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* GADVideoPlayerView_h */
