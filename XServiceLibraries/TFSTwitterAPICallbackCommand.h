//
#ifndef TFSTwitterAPICallbackCommand_h
#define TFSTwitterAPICallbackCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPICallbackCommand : TFSTwitterAPICommand {
    /* instance variables */
    NSString *_path;
    _Bool _stripEndpointVersion;
}

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id endpointPath:(id)path source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id endpointPath:(id)path stripEndpointVersion:(_Bool)version source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPICallbackCommand_h */
