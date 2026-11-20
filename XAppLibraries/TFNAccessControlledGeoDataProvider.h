//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNAccessControlledGeoDataProvider_h
#define TFNAccessControlledGeoDataProvider_h
@import Foundation;

#include "TFNGeoDataAccountAccessController.h"
#include "TFSTwitterGeoDataProvider-Protocol.h"

@class NSObject, NSString, TFSTwitterLocation;

@interface TFNAccessControlledGeoDataProvider : NSObject <TFSTwitterGeoDataProvider>

@property (readonly, nonatomic) id <TFSTwitterGeoDataProvider> globalGeoDataProvider;
@property (readonly, nonatomic) TFNGeoDataAccountAccessController *accessController;
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
- (id)init;
- (id)initWithGlobalGeoDataProvider:(id)provider accessController:(id)controller;
- (_Bool)isCachedLocationAvailable;
- (_Bool)isEnabled;
- (_Bool)isUsingRetainedGeoDataAllowed;
- (void)startUpdates;
- (void)stopUpdates;
- (void)getLocationServicesAvailableWithCallback:(id /* block */)callback;
- (void)getRealtimeLocationWithCallback:(id /* block */)callback;
- (void)getBestAvailableLocationWithCallback:(id /* block */)callback;

@end

#endif /* TFNAccessControlledGeoDataProvider_h */
