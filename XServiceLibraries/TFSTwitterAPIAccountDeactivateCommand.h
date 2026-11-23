//
#ifndef TFSTwitterAPIAccountDeactivateCommand_h
#define TFSTwitterAPIAccountDeactivateCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPIAccountDeactivateCommand : TFSTwitterAPICommand

@property (copy, nonatomic) NSString *password;
@property (nonatomic) unsigned long long timespan;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id password:(id)password timespan:(unsigned long long)timespan context:(id)context completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountDeactivateCommand_h */
