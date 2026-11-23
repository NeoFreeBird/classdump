//
#ifndef TFSTwitterAPIAccountTeamsContributeeDestroyCommand_h
#define TFSTwitterAPIAccountTeamsContributeeDestroyCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@interface TFSTwitterAPIAccountTeamsContributeeDestroyCommand : TFSTwitterAPICommand

@property (nonatomic) long long contributeeUserId;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id contributeeUserId:(long long)id context:(id)context completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountTeamsContributeeDestroyCommand_h */
