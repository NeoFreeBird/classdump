//
#ifndef TFSTwitterAPIAmplifyMarketplaceVideosPostRequest_h
#define TFSTwitterAPIAmplifyMarketplaceVideosPostRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIAmplifyMarketplaceVideosPostRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithMediaID:(id)id monetize:(_Bool)monetize videoCategories:(id)categories excludedAdvertisers:(id)advertisers excludedMonetizationCategories:(id)categories excludedAdsCategories:(id)categories context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIAmplifyMarketplaceVideosPostRequest_h */
