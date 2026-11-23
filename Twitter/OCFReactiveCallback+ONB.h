//
#ifndef OCFReactiveCallback_ONB_h
#define OCFReactiveCallback_ONB_h
@import Foundation;

@interface OCFReactiveCallback (ONB)

/* class methods */
+ (void)callbackOnboardingEndpointWithPath:(id)path account:(id)account;

/* instance methods */
- (void)reactToTriggerForAccount:(id)account queryParameters:(id)parameters;
- (id)privateTestable_callbackPathWithQueryParameters:(id)parameters;

@end

#endif /* OCFReactiveCallback_ONB_h */
