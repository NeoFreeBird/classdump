//
#ifndef _TtC14T1TwitterSwift26URPCustomActionPostRequest_h
#define _TtC14T1TwitterSwift26URPCustomActionPostRequest_h
@import Foundation;

#include "_TtC14T1TwitterSwift22URPCustomActionRequest.h"

@interface T1TwitterSwift.URPCustomActionPostRequest : T1TwitterSwift.URPCustomActionRequest // (Swift)

/* class methods */
+ (long long)HTTPMethodValue;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* _TtC14T1TwitterSwift26URPCustomActionPostRequest_h */
