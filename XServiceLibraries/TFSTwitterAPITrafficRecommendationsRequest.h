//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPITrafficRecommendationsRequest_h
#define TFSTwitterAPITrafficRecommendationsRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@class NSString;

@interface TFSTwitterAPITrafficRecommendationsRequest : TFSTwitterAPIEndpointRequest

@property (readonly, copy, nonatomic) NSString *configurationKey;
@property (readonly, copy, nonatomic) NSString *configurationValue;

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (long long)expectedRequestAnatomy;
+ (Class)responseClass;
+ (id)configuration;

/* instance methods */
- (id)initWithConfigurationKey:(id)key configurationValue:(id)value context:(id)context responseModelBuilder:(id)builder;
- (id)initWithConfigurationKey:(id)key configurationValue:(id)value expirationDate:(id)date pollAfterDate:(id)date context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPITrafficRecommendationsRequest_h */
