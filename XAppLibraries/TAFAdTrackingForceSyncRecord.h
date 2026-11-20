//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFAdTrackingForceSyncRecord_h
#define TAFAdTrackingForceSyncRecord_h
@import Foundation;

@class NSObject;

@interface TAFAdTrackingForceSyncRecord : NSObject

/* class methods */
+ (_Bool)didForceSyncUserID:(long long)id;
+ (void)markAsSyncedForUserID:(long long)id;

@end

#endif /* TAFAdTrackingForceSyncRecord_h */
