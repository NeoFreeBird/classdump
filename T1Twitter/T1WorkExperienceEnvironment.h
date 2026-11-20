//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1WorkExperienceEnvironment_h
#define T1WorkExperienceEnvironment_h
@import Foundation;

@class NSObject;

@interface T1WorkExperienceEnvironment : NSObject // (Swift)

/* class methods */
+ (id)viewerExperiencesDidChangeNotification;
+ (_Bool)isEnabledWithoutImpressionForAccount:(id)account;
+ (void)logExposureForAccount:(id)account;
+ (void)refreshExperiencesForUserID:(long long)id account:(id)account;
+ (_Bool)canEditForAccount:(id)account;
+ (id)editProfileFieldTitle;
+ (id)editProfileFieldHintForAccount:(id)account;
+ (id)editProfileFieldValueForAccount:(id)account;
+ (void)presentEditorFromViewController:(id)controller account:(id)account;
+ (void)prepareEditorForAccount:(id)account;
+ (long long)acceptedWriteCountForAccount:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1WorkExperienceEnvironment_h */
