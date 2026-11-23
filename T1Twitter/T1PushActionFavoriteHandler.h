//
#ifndef T1PushActionFavoriteHandler_h
#define T1PushActionFavoriteHandler_h
@import Foundation;

#include "T1PushActionHandler.h"

@interface T1PushActionFavoriteHandler : T1PushActionHandler

/* instance methods */
- (void)handleActionWithAccount:(id)account withPushPayload:(id)payload withResponse:(id)response withCompletion:(id /* block */)completion;

@end

#endif /* T1PushActionFavoriteHandler_h */
