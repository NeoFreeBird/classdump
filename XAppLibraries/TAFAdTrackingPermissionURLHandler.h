//
#ifndef TAFAdTrackingPermissionURLHandler_h
#define TAFAdTrackingPermissionURLHandler_h
@import Foundation;

@class NSObject;

@interface TAFAdTrackingPermissionURLHandler : NSObject // (Swift)

/* class methods */
+ (void)handleUrlParametersWithOrigin:(id)origin cta:(id)cta authManager:(id)manager context:(id)context scribe:(id)scribe;

/* instance methods */
- (id)init;

@end

#endif /* TAFAdTrackingPermissionURLHandler_h */
