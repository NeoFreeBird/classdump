//
#ifndef TFSTwitterAPIMutesKeywordsDestroyRequest_h
#define TFSTwitterAPIMutesKeywordsDestroyRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIMutesKeywordsDestroyRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithKeywordIDs:(id)ids context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIMutesKeywordsDestroyRequest_h */
