//
#ifndef TVPBroadcastVideoContext_h
#define TVPBroadcastVideoContext_h
@import Foundation;

#include "TBCPeriscopeLifecycleController.h"
#include "TVPVideoContext.h"

@class NSString, NSURL, TFSTwitterBroadcast;

@interface TVPBroadcastVideoContext : TVPVideoContext

@property (retain, nonatomic) TBCPeriscopeLifecycleController *lifecycleController;
@property (readonly, nonatomic) TFSTwitterBroadcast *broadcast;
@property (copy, nonatomic) NSString *lifecycleToken;
@property (copy, nonatomic) NSString *chatToken;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSString *chatPermissionType;
@property (nonatomic) _Bool liveChatReadOnly;
@property (readonly, nonatomic) _Bool latestReplayPlaylist;

/* instance methods */
- (id)initWithVideoType:(id)type broadcast:(id)broadcast ctaInfo:(id)info latestReplayPlaylist:(_Bool)playlist;

@end

#endif /* TVPBroadcastVideoContext_h */
