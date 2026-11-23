//
#ifndef TFSTwitterAPIConConBundleRequest_h
#define TFSTwitterAPIConConBundleRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIConConBundleRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (unsigned long long)supportedAuthenticationTypes;
+ (unsigned long long)baseURLType;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithBundleID:(id)id context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIConConBundleRequest_h */
