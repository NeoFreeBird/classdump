//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16TwitterAdFormats28PlayerViewPlaybackAttachment_h
#define _TtC16TwitterAdFormats28PlayerViewPlaybackAttachment_h
@import Foundation;

#include "TAVCaptionSink-Protocol.h"
#include "TAVPlaybackObservable-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TAVPlaybackState.h"

@class Swift.Bool, _$sSo13TAVPlayerView_pSgXw, _$sSo14TAVCaptionSink_pSg, _$sSo16TAVPlaybackStateCSg, _TtCs12_SwiftObject;

@interface TwitterAdFormats.PlayerViewPlaybackAttachment : Swift._SwiftObject <TAVCaptionSink, TAVPlaybackObservable, TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    __C.TAVPlaybackState? lastPlaybackState;
    Swift.Bool captionsEnabled;
    __C.TAVCaptionSink? captionSink;
    Swift.Bool didProcessCaptionModel;
    weak __C.TAVPlayerView? playerView;
}

@property (nonatomic, readonly) TAVPlaybackState *playbackState;

/* instance methods */
- (void)captionSourceDidUpdateWithCaptionModels:(id)models;
- (void)addPlaybackObserver:(id)observer;
- (void)removePlaybackObserver:(id)observer;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)observerDidAttachToPlayer:(id)player;

@end

#endif /* _TtC16TwitterAdFormats28PlayerViewPlaybackAttachment_h */
