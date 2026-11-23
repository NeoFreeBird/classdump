//
#ifndef T1PushActionAcceptFollowRequestHandler_h
#define T1PushActionAcceptFollowRequestHandler_h
@import Foundation;

#include "T1PushActionHandler.h"

@interface T1PushActionAcceptFollowRequestHandler : T1PushActionHandler

/* instance methods */
- (void)handleActionWithAccount:(id)account withPushPayload:(id)payload withResponse:(id)response withCompletion:(id /* block */)completion;

@end

#endif /* T1PushActionAcceptFollowRequestHandler_h */
