//
#ifndef TFSTwitterAPIAmplifyMarketplaceDefaultsCommand_h
#define TFSTwitterAPIAmplifyMarketplaceDefaultsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIAmplifyMarketplaceDefaultsCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAmplifyMarketplaceDefaultsCommand_h */
