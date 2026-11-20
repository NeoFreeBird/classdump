//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
