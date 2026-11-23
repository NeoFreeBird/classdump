//
#ifndef NSBundle_TFSAdditions_h
#define NSBundle_TFSAdditions_h
@import Foundation;

@interface NSBundle (TFSAdditions)

/* class methods */
+ (id)gid_frameworkBundle;
+ (void)gid_registerFonts;
+ (id)tfxParametersResourcesBundle;
+ (id)xAccountApplicationGroupName;
+ (id)applicationGroupNameOrDogfoodFallback;
+ (id)xAccountKeychainOAuthIdentifier;
+ (_Bool)xAccountIsEmployeeBuild;
+ (id)tek_applicationGroupName;
+ (id)tek_applicationKeychainOAuthIdentifier;
+ (_Bool)tek_isEmployeeBuild;
+ (id)tek_oAuthConsumerKey;
+ (id)tek_oAuthConsumerSecret;
+ (id)tfs_bundleForClass:(Class)_class withDefault:(id /* block */)_default;

/* instance methods */
- (id)tfs_bundleExtendedVersionExternalString;
- (id)tfs_bundleExtendedVersionString;
- (id)tfs_bundleDisplayVersionString;
- (id)tfs_bundleShortVersionString;
- (id)tfs_bundleVersion;
- (id)tfs_sharedApplicationGroupIdentifier;
- (id)tfs_sharedKeychainIdentifier;
- (id)tfs_sharedKeychainOAuthIdentifier;
- (id)tfs_betaMobileFeedbackURL;
- (id)tfs_pushEnvironment;
- (id)tfs_smsEnvironment;
- (id)tfs_clientDisplayName;
- (id)tfs_clientPrimaryScheme;
- (long long)_tfs_infoPlistYear;
- (long long)tfs_copyrightYear;
- (id)tfs_buildTime;
- (id)tfs_buildDate;
- (id)tfs_buildGitSHA;

@end

#endif /* NSBundle_TFSAdditions_h */
