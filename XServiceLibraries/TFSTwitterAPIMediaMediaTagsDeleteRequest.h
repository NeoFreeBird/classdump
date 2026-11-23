//
#ifndef TFSTwitterAPIMediaMediaTagsDeleteRequest_h
#define TFSTwitterAPIMediaMediaTagsDeleteRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIMediaMediaTagsDeleteRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithStatusID:(id)id mediaIDs:(id)ids taggedUserIDs:(id)ids context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIMediaMediaTagsDeleteRequest_h */
