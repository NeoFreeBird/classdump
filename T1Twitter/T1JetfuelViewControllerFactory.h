//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1JetfuelViewControllerFactory_h
#define T1JetfuelViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1JetfuelViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)onboardingBasePath;
+ (id)redirectUrlParameterKey;
+ (id)nativeViewControllerForPageURL:(id)url;
+ (id)nflGameIDFromPath:(id)path;
+ (id)entrySourceFromPath:(id)path;
+ (id)createPhoneSettingsWithAccount:(id)account;
+ (id)createSettingsPasswordResetWithAccount:(id)account;
+ (_Bool)isGrokModalPath:(id)path;
+ (void)presentWithPath:(id)path account:(id)account from:(id)from animated:(_Bool)animated completion:(id /* block */)completion;
+ (id)loginPathWithUsername:(id)username;
+ (id)onboardingPath;
+ (id)onboardingPathWithRedirectUrl:(id)url;
+ (id)quickAuthPath;

/* instance methods */
- (id)init;

@end

#endif /* T1JetfuelViewControllerFactory_h */
