//
#ifndef TFSTwitterAPITrendsAvailableRequest_h
#define TFSTwitterAPITrendsAvailableRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPITrendsAvailableRequest : TFSTwitterAPIEndpointRequest

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithContext:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPITrendsAvailableRequest_h */
