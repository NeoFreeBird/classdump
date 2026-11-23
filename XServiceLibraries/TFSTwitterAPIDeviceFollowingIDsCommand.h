//
#ifndef TFSTwitterAPIDeviceFollowingIDsCommand_h
#define TFSTwitterAPIDeviceFollowingIDsCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPIDeviceFollowingIDsCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSString *cursor;
@property (nonatomic) unsigned long long requestType;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id cursor:(id)cursor requestType:(unsigned long long)type context:(id)context source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIDeviceFollowingIDsCommand_h */
