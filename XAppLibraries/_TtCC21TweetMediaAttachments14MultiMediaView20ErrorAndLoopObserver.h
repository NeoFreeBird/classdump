//
#ifndef _TtCC21TweetMediaAttachments14MultiMediaView20ErrorAndLoopObserver_h
#define _TtCC21TweetMediaAttachments14MultiMediaView20ErrorAndLoopObserver_h
@import Foundation;

#include "TAVLoopObserver.h"

@class _$ss5ErrorMp _$s_So16TAVPlaybackStateCtc;

@interface TweetMediaAttachments.MultiMediaView.ErrorAndLoopObserver : TAVLoopObserver { // (Swift)
    /* instance variables */
    protocol descriptor for Swift.Error _$s_So16TAVPlaybackStateCtc errorCallback;
}

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (id)initWithLoopCallback:(id /* block */)callback;
- (id)init;

@end

#endif /* _TtCC21TweetMediaAttachments14MultiMediaView20ErrorAndLoopObserver_h */
