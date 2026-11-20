//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BroadcasterLiveChatSession_h
#define T1BroadcasterLiveChatSession_h
@import Foundation;

#include "T1BroadcasterLiveChatSessionDelegate-Protocol.h"

@class NSObject, NSString;

@interface T1BroadcasterLiveChatSession : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *liveBatchInterval;
    NSNumber"16@0:8 *isPerformanceImprovements1Enabled;
    NSNumber"16@0:8 *session;
    NSNumber"16@0:8 *forbiddenRetriesRemaining;
    NSNumber"16@0:8 *reconnectTask;
}

@property (nonatomic, readonly) NSString *broadcastID;
@property (nonatomic, weak) id <T1BroadcasterLiveChatSessionDelegate> delegate;

/* instance methods */
- (id)initWithBroadcastID:(id)id account:(id)account;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)sendChatMessage:(id)message;
- (id)init;

@end

#endif /* T1BroadcasterLiveChatSession_h */
