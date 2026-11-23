//
#ifndef FIRAnalyticsInterop_Protocol_h
#define FIRAnalyticsInterop_Protocol_h
@import Foundation;

@protocol FIRAnalyticsInterop

@required

/* required instance methods */
- (void)setConditionalUserProperty:(id)property;
- (void)clearConditionalUserProperty:(id)property forOrigin:(id)origin clearEventName:(id)name clearEventParameters:(id)parameters;
- (id)conditionalUserProperties:(id)properties propertyNamePrefix:(id)prefix;
- (long long)maxUserProperties:(id)properties;
- (void)getUserPropertiesWithCallback:(id /* block */)callback;
- (void)logEventWithOrigin:(id)origin name:(id)name parameters:(id)parameters;
- (void)setUserPropertyWithOrigin:(id)origin name:(id)name value:(id)value;
- (void)registerAnalyticsListener:(id)listener withOrigin:(id)origin;
- (void)unregisterAnalyticsListenerWithOrigin:(id)origin;

@optional

@end

#endif /* FIRAnalyticsInterop_Protocol_h */
