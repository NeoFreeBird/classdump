//
#ifndef TFSTwitterAPICommandWithResponseModelBuilder_h
#define TFSTwitterAPICommandWithResponseModelBuilder_h
@import Foundation;

#include "TFSTwitterAPICommand.h"
#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@interface TFSTwitterAPICommandWithResponseModelBuilder : TFSTwitterAPICommand

@property (readonly, nonatomic) id <TFSModel.TFSModelBuilder> responseModelBuilder;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;

@end

#endif /* TFSTwitterAPICommandWithResponseModelBuilder_h */
