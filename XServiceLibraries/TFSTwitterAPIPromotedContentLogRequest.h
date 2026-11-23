//
#ifndef TFSTwitterAPIPromotedContentLogRequest_h
#define TFSTwitterAPIPromotedContentLogRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIPromotedContentLogRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithParameters:(id)parameters context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIPromotedContentLogRequest_h */
