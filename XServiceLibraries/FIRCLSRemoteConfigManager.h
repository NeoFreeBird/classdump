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
