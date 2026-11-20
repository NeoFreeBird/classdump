//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSAGeoAuthorizedService_h
#define TSAGeoAuthorizedService_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"
#include "TSAAuthorizedService-Protocol.h"

@class CLLocationManager, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TSAGeoAuthorizedService : NSObject <CLLocationManagerDelegate, TSAAuthorizedService> {
    /* instance variables */
    CLLocationManager *_locationManager;
    NSMutableArray *_pendingAuthorizationRequests;
    NSObject<OS_dispatch_queue> *_cachedStatusQueue;
    int _cachedAuthorizationStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)_mapStatus:(int)status;

/* instance methods */
- (id)init;
- (void)queryAuthorizationStatusWithCompletionBlock:(id /* block */)block;
- (void)_tsa_authorizationStatusWithCompletionBlock:(id /* block */)block;
- (id)defaultUsageDescription;
- (void)requestAuthorizationWithCompletionBlock:(id /* block */)block;
- (void)processStatusUpdate:(int)update;
- (void)locationManagerDidChangeAuthorization:(id)authorization;
- (void)_tsa_authorizationStatusUpdated:(id)updated;
- (id)regrantPermissionInstructions;
- (void)dealloc;
- (void)_tsa_initCoreLocationManager;

@end

#endif /* TSAGeoAuthorizedService_h */
