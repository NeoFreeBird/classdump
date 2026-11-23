//
#ifndef T1MediaAttachmentPlayerView_Protocol_h
#define T1MediaAttachmentPlayerView_Protocol_h
@import Foundation;

#include "TAVPlaybackObservable-Protocol.h"

@class TAVPlayerViewConfiguration;

@protocol T1MediaAttachmentPlayerView <TAVPlaybackObservable>

@required

@property (copy, nonatomic) TAVPlayerViewConfiguration *configuration;

/* required instance methods */
- (void)associatePlayerWithMediaURL:(id)url attachment:(id)attachment autoPlayOptions:(unsigned long long)options features:(id)features completion:(id /* block */)completion;

@optional

@end

#endif /* T1MediaAttachmentPlayerView_Protocol_h */
