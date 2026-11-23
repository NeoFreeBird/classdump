//
#ifndef TFSTwitterAPIFeedbackDismissCommand_h
#define TFSTwitterAPIFeedbackDismissCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPIFeedbackDismissCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSString *feedbackID;

/* instance methods */
- (id)initWithAccountID:(id)id feedbackID:(id)id context:(id)context source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIFeedbackDismissCommand_h */
