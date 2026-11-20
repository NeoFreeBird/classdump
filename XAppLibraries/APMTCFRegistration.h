//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMTCFRegistration_h
#define APMTCFRegistration_h
@import Foundation;

@class NSObject, NSSet;

@interface APMTCFRegistration : NSObject {
    /* instance variables */
    NSSet *_purposeIDs;
    NSSet *_purposeIDsLegitimateInterests;
    NSSet *_purposeIDsFlexiblePurposes;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (_Bool)hasConsentForPurposeID:(long long)id;
- (_Bool)hasLegitimateInterestForPurposeID:(long long)id;
- (_Bool)hasFlexibleLegitimateInterestForPurposeID:(long long)id;

@end

#endif /* APMTCFRegistration_h */
