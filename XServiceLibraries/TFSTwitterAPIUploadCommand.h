//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIUploadCommand_h
#define TFSTwitterAPIUploadCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@interface TFSTwitterAPIUploadCommand : TFSTwitterAPICommand

@property (copy, nonatomic) id /* block */ uploadProgressBlock;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id context:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source uploadProgressBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didUpdateUploadProgress:(float)progress;

@end

#endif /* TFSTwitterAPIUploadCommand_h */
