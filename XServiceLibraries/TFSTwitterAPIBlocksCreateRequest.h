//
#ifndef TFSTwitterAPIBlocksCreateRequest_h
#define TFSTwitterAPIBlocksCreateRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIBlocksCreateRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithUserID:(id)id impressionID:(id)id isEarned:(_Bool)earned skipStatus:(_Bool)status context:(id)context responseModelBuilder:(id)builder;
- (id)initWithScreenName:(id)name impressionID:(id)id isEarned:(_Bool)earned skipStatus:(_Bool)status context:(id)context responseModelBuilder:(id)builder;
- (id)initWithUserID:(id)id screenName:(id)name impressionID:(id)id isEarned:(_Bool)earned skipStatus:(_Bool)status context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIBlocksCreateRequest_h */
