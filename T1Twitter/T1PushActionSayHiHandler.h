//
#ifndef T1PushActionSayHiHandler_h
#define T1PushActionSayHiHandler_h
@import Foundation;

#include "T1PushActionHandler.h"

@interface T1PushActionSayHiHandler : T1PushActionHandler

/* instance methods */
- (void)handleActionWithAccount:(id)account withPushPayload:(id)payload withResponse:(id)response withCompletion:(id /* block */)completion;
- (void)_showComposerWithPrefilledMentionOf:(id)of from:(id)from completion:(id /* block */)completion;

@end

#endif /* T1PushActionSayHiHandler_h */
