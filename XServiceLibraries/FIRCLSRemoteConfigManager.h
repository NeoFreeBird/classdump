//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSRemoteConfigManager_h
#define FIRCLSRemoteConfigManager_h
@import Foundation;

@class HasMalware, NSArray, NSObject;

@interface FIRCLSRemoteConfigManager : NSObject { // (Swift)
    /* instance variables */
    HasMalware lock;
    HasMalware remoteConfig;
    HasMalware persistenceDelegate;
}

@property (nonatomic, readonly) NSArray *rolloutAssignment;

/* instance methods */
- (id)initWithRemoteConfig:(id)config persistenceDelegate:(id)delegate;
- (void)updateRolloutsStateWithRolloutsState:(id)state reportID:(id)id;
- (id)getRolloutAssignmentsEncodedJsonString;
- (id)init;

@end

#endif /* FIRCLSRemoteConfigManager_h */
