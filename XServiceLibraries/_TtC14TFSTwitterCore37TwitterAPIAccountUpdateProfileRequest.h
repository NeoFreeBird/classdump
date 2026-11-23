//
#ifndef _TtC14TFSTwitterCore37TwitterAPIAccountUpdateProfileRequest_h
#define _TtC14TFSTwitterCore37TwitterAPIAccountUpdateProfileRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterCore.TwitterAPIAccountUpdateProfileRequest : TFSTwitterAPIEndpointRequest // (Swift)

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* _TtC14TFSTwitterCore37TwitterAPIAccountUpdateProfileRequest_h */
