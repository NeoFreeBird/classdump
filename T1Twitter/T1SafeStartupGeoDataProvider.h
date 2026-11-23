//
#ifndef T1SafeStartupGeoDataProvider_h
#define T1SafeStartupGeoDataProvider_h
@import Foundation;

#include "TFSTwitterGeoDataProvider-Protocol.h"

@class NSObject, NSString, TFSTwitterLocation;

@interface T1SafeStartupGeoDataProvider : NSObject <TFSTwitterGeoDataProvider>

@property (readonly) _Bool cachedLocationAvailable;
@property (readonly) TFSTwitterLocation *currentLocation;
@property (readonly) _Bool locationServicesAvailable;
@property (readonly, copy) NSString *timezoneName;
@property (readonly) _Bool enabled;
@property double locationUpdateInterval;
@property double locationUpdateDuration;
@property (readonly) _Bool usingRetainedGeoDataAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)isCachedLocationAvailable;
- (_Bool)isEnabled;
- (void)getRealtimeLocationWithCallback:(id /* block */)callback;
- (void)getBestAvailableLocationWithCallback:(id /* block */)callback;
- (void)getLocationServicesAvailableWithCallback:(id /* block */)callback;
- (_Bool)isUsingRetainedGeoDataAllowed;
- (void)startUpdates;
- (void)stopUpdates;

@end

#endif /* T1SafeStartupGeoDataProvider_h */
