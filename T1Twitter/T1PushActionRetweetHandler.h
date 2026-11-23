//
#ifndef T1PushActionRetweetHandler_h
#define T1PushActionRetweetHandler_h
@import Foundation;

#include "T1PushActionHandler.h"

@interface T1PushActionRetweetHandler : T1PushActionHandler

/* instance methods */
- (void)handleActionWithAccount:(id)account withPushPayload:(id)payload withResponse:(id)response withCompletion:(id /* block */)completion;

@end

#endif /* T1PushActionRetweetHandler_h */
