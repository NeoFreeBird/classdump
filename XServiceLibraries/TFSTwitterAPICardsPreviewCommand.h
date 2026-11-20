//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPICardsPreviewCommand_h
#define TFSTwitterAPICardsPreviewCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"
#include "TNLRequestRetryPolicyProvider-Protocol.h"

@class NSString;

@interface TFSTwitterAPICardsPreviewCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (copy, nonatomic) NSString *statusText;
@property (retain, nonatomic) id <TNLRequestRetryPolicyProvider> retryPolicyProvider;
@property (nonatomic) double totalTimeout;

/* instance methods */
- (id)initWithAccountID:(id)id statusText:(id)text retryPolicyProvider:(id)provider totalTimeout:(double)timeout context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (_Bool)shouldEndNetworkTransactionMetrics;
- (id)requestConfigurationForAPIRequest:(id)apirequest requestConfiguration:(id)configuration;

@end

#endif /* TFSTwitterAPICardsPreviewCommand_h */
