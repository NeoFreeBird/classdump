//
#ifndef TFSTwitterAPIMutesUsersIDsCommand_h
#define TFSTwitterAPIMutesUsersIDsCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPIMutesUsersIDsCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSString *cursor;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id cursor:(id)cursor source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIMutesUsersIDsCommand_h */
