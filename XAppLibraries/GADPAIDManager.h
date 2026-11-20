//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADPAIDManager_h
#define GADPAIDManager_h
@import Foundation;

#include "GADPAIDIdentifier.h"

@class NSObject, NSUserDefaults;

@interface GADPAIDManager : NSObject {
    /* instance variables */
    GADPAIDIdentifier *_PAIDV1;
    GADPAIDIdentifier *_PAIDV2;
    NSUserDefaults *_userDefaults;
}

@property (nonatomic) _Bool storageAllowed;
@property (nonatomic) _Bool PAIDV2UserEnabled;

/* class methods */
+ (id)sharedInstance;
+ (long long)unificationVersion;

/* instance methods */
- (id)init;
- (void)clearExpiredPAIDV1WithTTL:(double)ttl;
- (void)clearExpiredPAIDV2WithTTL:(double)ttl;
- (id)PAIDV1WithTTL:(double)ttl;
- (id)PAIDV2WithTTL:(double)ttl;
- (void)resetPAIDV1;
- (void)resetPAIDV2;
- (void)importPAIDDataWithV1Identifier:(id)identifier;
- (void)importPAIDDataWithV2Identifier:(id)identifier v2UserEnabled:(_Bool)enabled;
- (void)updatePAIDV1:(id)paidv1;
- (void)updatePAIDV2:(id)paidv2;

@end

#endif /* GADPAIDManager_h */
