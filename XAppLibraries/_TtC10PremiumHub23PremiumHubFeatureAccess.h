//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10PremiumHub23PremiumHubFeatureAccess_h
#define _TtC10PremiumHub23PremiumHubFeatureAccess_h
@import Foundation;

@class NSObject, _$sSo24TPSFeatureSwitchesAccess_p;

@interface PremiumHub.PremiumHubFeatureAccess : NSObject { // (Swift)
    /* instance variables */
    __C.TPSFeatureSwitchesAccess featureSwitches;
}

@property (nonatomic, readonly) _Bool premiumHubEnabled;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;

@end

#endif /* _TtC10PremiumHub23PremiumHubFeatureAccess_h */
