//
#ifndef T1PushActionFollowHandler_h
#define T1PushActionFollowHandler_h
@import Foundation;

#include "T1PushActionHandler.h"

@interface T1PushActionFollowHandler : T1PushActionHandler

/* instance methods */
- (void)handleActionWithAccount:(id)account withPushPayload:(id)payload withResponse:(id)response withCompletion:(id /* block */)completion;

@end

#endif /* T1PushActionFollowHandler_h */
