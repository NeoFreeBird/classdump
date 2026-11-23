//
#ifndef TFSTwitterAPIAdsIDSyncFetchRequest_h
#define TFSTwitterAPIAdsIDSyncFetchRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIAdsIDSyncFetchRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (unsigned long long)baseURLType;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithIDSyncData:(id)data context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIAdsIDSyncFetchRequest_h */
