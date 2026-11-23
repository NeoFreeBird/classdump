//
#ifndef TFSTwitterAPICardsCreateCommand_h
#define TFSTwitterAPICardsCreateCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSDictionary;

@interface TFSTwitterAPICardsCreateCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (copy, nonatomic) NSDictionary *cardData;

/* instance methods */
- (id)initWithAccountID:(id)id cardData:(id)data context:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (_Bool)shouldEndNetworkTransactionMetrics;

@end

#endif /* TFSTwitterAPICardsCreateCommand_h */
