//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPITwoFactorAuthRemoveMethodCommand_h
#define TFSTwitterAPITwoFactorAuthRemoveMethodCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@interface TFSTwitterAPITwoFactorAuthRemoveMethodCommand : TFSTwitterAPICommand

@property (nonatomic) long long methodID;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id methodID:(long long)id completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPITwoFactorAuthRemoveMethodCommand_h */
