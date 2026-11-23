//
#ifndef _TtC14T1TwitterSwift24T1ProfileModulesFeatures_h
#define _TtC14T1TwitterSwift24T1ProfileModulesFeatures_h
@import Foundation;

#include "_TtP21TwitterProfileModules22ProfileModulesFeatures_-Protocol.h"

@class NSObject, _$sSo24TPSFeatureSwitchesAccess_p;

@interface T1TwitterSwift.T1ProfileModulesFeatures : NSObject <TwitterProfileModules.ProfileModulesFeatures> { // (Swift)
    /* instance variables */
    __C.TPSFeatureSwitchesAccess featureSwitches;
}

@property (nonatomic, readonly) _Bool aboutModuleEnabled;
@property (nonatomic, readonly) _Bool aboutModuleDesignV2Enabled;
@property (nonatomic, readonly) _Bool editModuleEnabled;
@property (nonatomic, readonly) _Bool createCommunitiesModuleEnabled;
@property (nonatomic, readonly) _Bool mobileAppModuleEnabled;
@property (nonatomic, readonly) _Bool mobileAppSpotlightIOSOnlyEnabled;
@property (nonatomic, readonly) _Bool professionalProfileModuleSettingsGoogleMapsEnabled;
@property (nonatomic, readonly) _Bool linkModuleEnabled;
@property (nonatomic, readonly) _Bool spotlightConfigurationPageEnabled;
@property (nonatomic, readonly) long long offboardingDisclaimerVariant;
@property (nonatomic, readonly) _Bool profileAboutModuleSharingEnabled;
@property (nonatomic, readonly) _Bool jobsModuleEnabled;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift24T1ProfileModulesFeatures_h */
