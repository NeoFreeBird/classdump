//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP21TweetMediaAttachments18MultiMediaPlayable__Protocol_h
#define _TtP21TweetMediaAttachments18MultiMediaPlayable__Protocol_h
@import Foundation;

#include "TAVPlaybackObservable-Protocol.h"
#include "TAVUIAutoplayable-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@protocol TweetMediaAttachments.MultiMediaPlayable <TAVUIAutoplayable>

@required

@property (nonatomic, readonly) id <TAVPlaybackObservable> playbackObservable;
@property (nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;

/* required instance methods */
- (void)setPrewarmed:(_Bool)prewarmed;

@optional

@end

#endif /* _TtP21TweetMediaAttachments18MultiMediaPlayable__Protocol_h */
