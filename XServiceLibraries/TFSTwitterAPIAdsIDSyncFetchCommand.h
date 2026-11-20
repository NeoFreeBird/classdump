//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
