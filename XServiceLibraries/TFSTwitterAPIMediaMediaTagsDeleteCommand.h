//
#ifndef TFSTwitterAPIMediaMediaTagsDeleteCommand_h
#define TFSTwitterAPIMediaMediaTagsDeleteCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSArray, NSNumber;

@interface TFSTwitterAPIMediaMediaTagsDeleteCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSNumber *statusID;
@property (retain, nonatomic) NSArray *mediaIDs;
@property (retain, nonatomic) NSArray *taggedUserIDs;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id statusID:(id)id mediaIDs:(id)ids taggedUserIDs:(id)ids source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIMediaMediaTagsDeleteCommand_h */
