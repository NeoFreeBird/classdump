//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVAssetResourceLoaderDelegate_Protocol_h
#define AVAssetResourceLoaderDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol AVAssetResourceLoaderDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)resourceLoader:(id)loader shouldWaitForLoadingOfRequestedResource:(id)resource;
- (_Bool)resourceLoader:(id)loader shouldWaitForRenewalOfRequestedResource:(id)resource;
- (void)resourceLoader:(id)loader didCancelLoadingRequest:(id)request;
- (_Bool)resourceLoader:(id)loader shouldWaitForResponseToAuthenticationChallenge:(id)challenge;
- (void)resourceLoader:(id)loader didCancelAuthenticationChallenge:(id)challenge;

@end

#endif /* AVAssetResourceLoaderDelegate_Protocol_h */
