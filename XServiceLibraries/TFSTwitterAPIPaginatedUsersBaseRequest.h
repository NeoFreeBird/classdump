//
#ifndef TFSTwitterAPIPaginatedUsersBaseRequest_h
#define TFSTwitterAPIPaginatedUsersBaseRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIPaginatedUsersBaseRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithUserID:(id)id cursor:(id)cursor skipStatus:(_Bool)status additionalParameters:(id)parameters context:(id)context responseModelBuilder:(id)builder;
- (id)initWithScreenName:(id)name cursor:(id)cursor skipStatus:(_Bool)status additionalParameters:(id)parameters context:(id)context responseModelBuilder:(id)builder;
- (id)initWithCursor:(id)cursor skipStatus:(_Bool)status additionalParameters:(id)parameters context:(id)context responseModelBuilder:(id)builder;
- (id)initWithScreenName:(id)name userID:(id)id cursor:(id)cursor skipStatus:(_Bool)status additionalParameters:(id)parameters context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIPaginatedUsersBaseRequest_h */
