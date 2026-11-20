//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIMutesConversationsCreateCommand_h
#define TFSTwitterAPIMutesConversationsCreateCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSNumber;

@interface TFSTwitterAPIMutesConversationsCreateCommand : TFSTwitterAPICommand

@property (readonly, nonatomic) NSNumber *statusID;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id statusID:(id)id completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIMutesConversationsCreateCommand_h */
