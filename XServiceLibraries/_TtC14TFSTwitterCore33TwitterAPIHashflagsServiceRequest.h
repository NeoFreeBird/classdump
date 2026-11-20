//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore33TwitterAPIHashflagsServiceRequest_h
#define _TtC14TFSTwitterCore33TwitterAPIHashflagsServiceRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterCore.TwitterAPIHashflagsServiceRequest : TFSTwitterAPIEndpointRequest // (Swift)

/* class methods */
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* _TtC14TFSTwitterCore33TwitterAPIHashflagsServiceRequest_h */
