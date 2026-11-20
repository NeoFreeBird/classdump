//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADUserPreferences_h
#define GADUserPreferences_h
@import Foundation;

#include "GADObserverCollection.h"
#include "GADSignalSource-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GADUserPreferences : NSObject <GADSignalSource> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADObserverCollection *_observers;
    NSMutableArray *_userDefaultsObservers;
    NSDictionary *_cachedPreferencesConfiguration;
    NSDictionary *_defaultPreferencesConfiguration;
    double _configurationLastUpdatedTimestamp;
    NSArray *_observedPreferencesConfigurationKeys;
    _Bool _preferencesUpdateInProgress;
    double _perAppIdentifierTTL;
    double _perAppIdentifierV2TTL;
}

@property (readonly, nonatomic) _Bool identifiersAllowed;
@property (readonly, nonatomic) NSDictionary *preferencesConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (void)migratePAUID;
+ (void)migratePAUIDV2;

/* instance methods */
- (id)init;
- (void)updateCachedUserDefaults;
- (id)observedUserDefaults;
- (void)checkForUserDefaultsChange;
- (void)updateDefaultAppMeasurementConfiguration;
- (void)handleAppMeasurementConfigurationUserDefaultsDidChange;
- (void)lockQueueSetPreferencesConfiguration:(id)configuration timestamp:(double)timestamp defaultPreferencesUpdated:(_Bool)updated;
- (void)setPreferencesConfiguration:(id)configuration timestamp:(double)timestamp;
- (void)clearPAUIDGestures;
- (void)signalsWithCompletionHandler:(id /* block */)handler;
- (_Bool)lockQueueIdentifiersAllowed;
- (id)lockQueuePreferencesConfiguration;
- (void)setPAUIDEnabledByUser:(_Bool)user;
- (void)setPAUIDEnabledByPublisher:(_Bool)publisher;
- (id)PAUIDEnabledByPublisher;
- (void)resetPAUID;
- (void)getAsynchronousSignalCreationBlock:(id /* block */ *)block;

@end

#endif /* GADUserPreferences_h */
