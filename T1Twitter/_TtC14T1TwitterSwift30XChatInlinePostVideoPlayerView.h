//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift30XChatInlinePostVideoPlayerView_h
#define _TtC14T1TwitterSwift30XChatInlinePostVideoPlayerView_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"

@class Swift.Bool, UIView, _$s12XVideoEditor27VideoClipPlaybackControllerCMn, _$sSo13TAVPlayerViewC, _$sSo16TAVPlaybackStateCSg, _$sSo9TAVPlayerC;

@interface T1TwitterSwift.XChatInlinePostVideoPlayerView : UIView <TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    __C.TAVPlayer player;
    __C.TAVPlayerView playerView;
    nominal type descriptor for XVideoEditor.VideoClipPlaybackController clipPlaybackController;
    Swift.Bool isPlaybackDesired;
    __C.TAVPlaybackState? lastObservedPlaybackState;
}

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)observerDidAttachToPlayer:(id)player;
- (void)observerDidDetachFromPlayer:(id)player;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift30XChatInlinePostVideoPlayerView_h */
