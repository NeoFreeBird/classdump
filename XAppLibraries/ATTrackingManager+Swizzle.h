//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
