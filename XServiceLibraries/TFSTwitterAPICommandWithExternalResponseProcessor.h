//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPICommandWithExternalResponseProcessor_h
#define TFSTwitterAPICommandWithExternalResponseProcessor_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPICommandWithExternalResponseProcessor : TFSTwitterAPICommandWithResponseModelBuilder

@property (readonly, copy, nonatomic) id /* block */ responseProcessorBlock;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source responseModelBuilder:(id)builder responseProcessorBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (void)processResponse:(id)response;

@end

#endif /* TFSTwitterAPICommandWithExternalResponseProcessor_h */
