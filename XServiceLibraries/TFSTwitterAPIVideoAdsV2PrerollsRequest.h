//
#ifndef TFSTwitterAPIVideoAdsV2PrerollsRequest_h
#define TFSTwitterAPIVideoAdsV2PrerollsRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIVideoAdsV2PrerollsRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithTweets:(id)tweets prerollID:(id)id dynamicPrerollType:(id)type includeLongVideos:(_Bool)videos context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIVideoAdsV2PrerollsRequest_h */
