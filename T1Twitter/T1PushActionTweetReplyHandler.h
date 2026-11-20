//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PushActionTweetReplyHandler_h
#define T1PushActionTweetReplyHandler_h
@import Foundation;

#include "T1PushActionHandler.h"

@interface T1PushActionTweetReplyHandler : T1PushActionHandler

/* instance methods */
- (void)handleActionWithAccount:(id)account withPushPayload:(id)payload withResponse:(id)response withCompletion:(id /* block */)completion;
- (void)_replyToTweetWithStatusID:(long long)id bySender:(id)sender fromAccount:(id)account withText:(id)text pushPayload:(id)payload completionBlock:(id /* block */)block;

@end

#endif /* T1PushActionTweetReplyHandler_h */
