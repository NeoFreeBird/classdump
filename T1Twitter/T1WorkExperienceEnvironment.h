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
+ (void)readRolesAfterReconnectingForAccount:(id)account;
+ (_Bool)didReconnectFromStatus:(long long)status toStatus:(long long)status;
+ (long long)acceptedWriteCountForAccount:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1WorkExperienceEnvironment_h */
