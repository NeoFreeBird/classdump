//
#ifndef TLPTwitterAPILivePipelineUpdateSubscriptionsRequest_h
#define TLPTwitterAPILivePipelineUpdateSubscriptionsRequest_h
@import Foundation;

@class TFSTwitterAPIEndpointRequest;

@interface TLPTwitterAPILivePipelineUpdateSubscriptionsRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
+ (unsigned long long)supportedAuthenticationTypes;
+ (id)configuration;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithSubTopics:(id)topics unsubTopics:(id)topics livePipelineSessionID:(id)id context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TLPTwitterAPILivePipelineUpdateSubscriptionsRequest_h */
