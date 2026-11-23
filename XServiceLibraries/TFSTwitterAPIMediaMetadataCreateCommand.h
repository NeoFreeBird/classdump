//
#ifndef TFSTwitterAPIMediaMetadataCreateCommand_h
#define TFSTwitterAPIMediaMetadataCreateCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSDictionary, NSString;

@interface TFSTwitterAPIMediaMetadataCreateCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSString *mediaID;
@property (retain, nonatomic) NSDictionary *mediaMetadata;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id mediaID:(id)id mediaMetadata:(id)metadata source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIMediaMetadataCreateCommand_h */
