//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift25URPCustomActionGetRequest_h
#define _TtC14T1TwitterSwift25URPCustomActionGetRequest_h
@import Foundation;

#include "_TtC14T1TwitterSwift22URPCustomActionRequest.h"

@interface T1TwitterSwift.URPCustomActionGetRequest : T1TwitterSwift.URPCustomActionRequest // (Swift)

/* class methods */
+ (long long)HTTPMethodValue;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* _TtC14T1TwitterSwift25URPCustomActionGetRequest_h */
