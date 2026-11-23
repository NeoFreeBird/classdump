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
