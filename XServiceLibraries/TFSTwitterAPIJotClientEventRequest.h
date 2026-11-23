//
#ifndef TFSTwitterAPIJotClientEventRequest_h
#define TFSTwitterAPIJotClientEventRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIJotClientEventRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
+ (unsigned long long)supportedAuthenticationTypes;
+ (unsigned long long)responseHydrationFlags;
+ (long long)expectedRequestAnatomy;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithLog:(id)log language:(id)language retryDistribution:(id)distribution isDebug:(_Bool)debug context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIJotClientEventRequest_h */
