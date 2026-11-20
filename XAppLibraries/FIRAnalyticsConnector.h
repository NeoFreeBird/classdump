//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRAnalyticsConnector_h
#define FIRAnalyticsConnector_h
@import Foundation;

#include "FIRAnalytics.h"
#include "FIRAnalyticsInterop-Protocol.h"
#include "FIRLibrary-Protocol.h"

@class NSMutableDictionary, NSObject;

@interface FIRAnalyticsConnector : NSObject <FIRLibrary, FIRAnalyticsInterop>

@property (weak, nonatomic) FIRAnalytics *analytics;
@property (retain, nonatomic) id logEventListener;
@property (retain, nonatomic) NSMutableDictionary *listeners;

/* class methods */
+ (void)load;
+ (id)componentsToRegister;

/* instance methods */
- (void)clearConditionalUserProperty:(id)property forOrigin:(id)origin clearEventName:(id)name clearEventParameters:(id)parameters;
- (id)conditionalUserProperties:(id)properties propertyNamePrefix:(id)prefix;
- (void)logEventWithOrigin:(id)origin name:(id)name parameters:(id)parameters;
- (void)getUserPropertiesWithCallback:(id /* block */)callback;
- (long long)maxUserProperties:(id)properties;
- (void)setConditionalUserProperty:(id)property;
- (void)setUserPropertyWithOrigin:(id)origin name:(id)name value:(id)value;
- (id)simplifiedParametersFromEventParameters:(id)parameters;
- (void)registerAnalyticsListener:(id)listener withOrigin:(id)origin;
- (void)unregisterAnalyticsListenerWithOrigin:(id)origin;
- (id)eventFromDictionary:(id)dictionary;
- (id)eventWithOrigin:(id)origin eventName:(id)name params:(id)params;

@end

#endif /* FIRAnalyticsConnector_h */
