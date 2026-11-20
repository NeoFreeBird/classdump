//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP21TwitterProfileModules22ProfileModulesFeatures__Protocol_h
#define _TtP21TwitterProfileModules22ProfileModulesFeatures__Protocol_h
@import Foundation;

@protocol TwitterProfileModules.ProfileModulesFeatures

@required

@property (nonatomic, readonly) _Bool createCommunitiesModuleEnabled;
@property (nonatomic, readonly) _Bool aboutModuleEnabled;
@property (nonatomic, readonly) _Bool aboutModuleDesignV2Enabled;
@property (nonatomic, readonly) _Bool editModuleEnabled;
@property (nonatomic, readonly) _Bool mobileAppModuleEnabled;
@property (nonatomic, readonly) _Bool mobileAppSpotlightIOSOnlyEnabled;
@property (nonatomic, readonly) _Bool professionalProfileModuleSettingsGoogleMapsEnabled;
@property (nonatomic, readonly) _Bool linkModuleEnabled;
@property (nonatomic, readonly) _Bool spotlightConfigurationPageEnabled;
@property (nonatomic, readonly) long long offboardingDisclaimerVariant;
@property (nonatomic, readonly) _Bool profileAboutModuleSharingEnabled;
@property (nonatomic, readonly) _Bool jobsModuleEnabled;

@optional

@end

#endif /* _TtP21TwitterProfileModules22ProfileModulesFeatures__Protocol_h */
