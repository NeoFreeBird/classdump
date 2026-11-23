//
#ifndef _TtC14TFSTwitterCore32TFSTwitterAPITonBucketGetRequest_h
#define _TtC14TFSTwitterCore32TFSTwitterAPITonBucketGetRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterCore.TFSTwitterAPITonBucketGetRequest : TFSTwitterAPIEndpointRequest // (Swift)

/* class methods */
+ (unsigned long long)baseURLType;
+ (long long)HTTPMethodValue;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* _TtC14TFSTwitterCore32TFSTwitterAPITonBucketGetRequest_h */
