//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPILiveEventSubscriptionRequest_h
#define TFSTwitterAPILiveEventSubscriptionRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPILiveEventSubscriptionRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithEventID:(id)id remindMe:(_Bool)me notificationID:(id)id context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPILiveEventSubscriptionRequest_h */
