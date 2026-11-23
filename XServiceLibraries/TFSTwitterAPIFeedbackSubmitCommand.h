//
#ifndef TFSTwitterAPIFeedbackSubmitCommand_h
#define TFSTwitterAPIFeedbackSubmitCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSNumber, NSString;

@interface TFSTwitterAPIFeedbackSubmitCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSString *feedbackID;
@property (retain, nonatomic) NSNumber *score;
@property (retain, nonatomic) NSString *text;

/* instance methods */
- (id)initWithAccountID:(id)id feedbackID:(id)id score:(id)score text:(id)text context:(id)context source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIFeedbackSubmitCommand_h */
