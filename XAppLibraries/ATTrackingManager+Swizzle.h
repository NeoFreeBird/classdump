//
#ifndef ATTrackingManager_Swizzle_h
#define ATTrackingManager_Swizzle_h
@import Foundation;

@interface ATTrackingManager (Swizzle)

/* class methods */
+ (void)load;
+ (void)_tsa_swizzled_requestTrackingAuthorizationWithCompletionHandler:(id /* block */)handler;

@end

#endif /* ATTrackingManager_Swizzle_h */
