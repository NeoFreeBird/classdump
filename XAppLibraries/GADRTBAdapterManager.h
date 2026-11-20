//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADRTBAdapterManager_h
#define GADRTBAdapterManager_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GADRTBAdapterManager : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSArray *_signalAdapterBundles;
    NSMutableDictionary *_typedAdapterNamesForAdUnit;
    GADObserverCollection *_observers;
    NSMutableDictionary *_mediationCredentials;
    NSMutableDictionary *_untypedCredentials;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)updateAdapters;
- (void)updateGlobalAdapters;
- (void)updateRTBAdapters;
- (void)updateAdUnitAdapterConfiguration:(id)configuration;
- (id)registeredAdapterNamesForAdUnitID:(id)id adType:(id)type;
- (id)registeredSignalAdapterBundles;
- (id)registeredAdapterNamesForAdUnitID:(id)id adTypes:(id)types;
- (id)credentialsForAdapterClass:(Class)_class adUnitID:(id)id adType:(id)type;
- (id)untypedCredentialsForAdapterClassName:(id)name adType:(id)type;
- (id)typedCredentialsForAdapterClassName:(id)name adUnitID:(id)id adType:(id)type;
- (id)credentialsForAdapterClass:(Class)_class adUnitID:(id)id adTypes:(id)types;

@end

#endif /* GADRTBAdapterManager_h */
