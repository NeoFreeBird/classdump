//
#ifndef TFSTwitterAPIAdsIDSyncFetchCommand_h
#define TFSTwitterAPIAdsIDSyncFetchCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSDictionary;

@interface TFSTwitterAPIAdsIDSyncFetchCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (copy, nonatomic) NSDictionary *idSyncData;

/* instance methods */
- (id)initWithAccountID:(id)id idSyncData:(id)data context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAdsIDSyncFetchCommand_h */
