//
#ifndef T1PushActionDeclineFollowRequestHandler_h
#define T1PushActionDeclineFollowRequestHandler_h
@import Foundation;

#include "T1PushActionHandler.h"

@interface T1PushActionDeclineFollowRequestHandler : T1PushActionHandler

/* instance methods */
- (void)handleActionWithAccount:(id)account withPushPayload:(id)payload withResponse:(id)response withCompletion:(id /* block */)completion;

@end

#endif /* T1PushActionDeclineFollowRequestHandler_h */
