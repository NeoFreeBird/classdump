//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterGeoDataProvider_Protocol_h
#define TFSTwitterGeoDataProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, TFSTwitterLocation;

@protocol TFSTwitterGeoDataProvider <NSObject>

@required

@property (readonly) _Bool cachedLocationAvailable;
@property (readonly) TFSTwitterLocation *currentLocation;
@property (readonly) _Bool locationServicesAvailable;
@property (readonly, copy) NSString *timezoneName;
@property (readonly) _Bool enabled;
@property double locationUpdateInterval;
@property double locationUpdateDuration;
@property (readonly) _Bool usingRetainedGeoDataAllowed;

/* required instance methods */
- (void)startUpdates;
- (void)stopUpdates;
- (void)getLocationServicesAvailableWithCallback:(id /* block */)callback;
- (void)getRealtimeLocationWithCallback:(id /* block */)callback;
- (void)getBestAvailableLocationWithCallback:(id /* block */)callback;
- (_Bool)isCachedLocationAvailable;
- (_Bool)isEnabled;
- (_Bool)isUsingRetainedGeoDataAllowed;

@optional

@end

#endif /* TFSTwitterGeoDataProvider_Protocol_h */
