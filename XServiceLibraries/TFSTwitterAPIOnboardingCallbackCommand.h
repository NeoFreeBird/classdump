//
#ifndef TFSTwitterAPIOnboardingCallbackCommand_h
#define TFSTwitterAPIOnboardingCallbackCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPIOnboardingCallbackCommand : TFSTwitterAPICommand {
    /* instance variables */
    NSString *_path;
}

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id path:(id)path source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIOnboardingCallbackCommand_h */
