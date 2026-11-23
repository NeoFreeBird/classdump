//
#ifndef TLPTwitterAPILivePipelineEventsRequest_h
#define TLPTwitterAPILivePipelineEventsRequest_h
@import Foundation;

@class NSArray, TFSTwitterAPIEndpointRequest;

@interface TLPTwitterAPILivePipelineEventsRequest : TFSTwitterAPIEndpointRequest

@property (readonly, nonatomic) NSArray *topics;

/* class methods */
+ (id)acceptContentType;
+ (id)endpointPath;
+ (unsigned long long)baseURLType;
+ (unsigned long long)supportedAuthenticationTypes;
+ (id)configuration;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithSubscribeTopics:(id)topics context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TLPTwitterAPILivePipelineEventsRequest_h */
