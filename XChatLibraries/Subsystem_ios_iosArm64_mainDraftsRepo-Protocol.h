//
#ifndef Subsystem_ios_iosArm64_mainDraftsRepo_Protocol_h
#define Subsystem_ios_iosArm64_mainDraftsRepo_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainDraftsRepo

@required

/* required instance methods */
- (void)getDraftConvId:(id)id completionHandler:(id /* block */)handler;
- (void)getDraftConvId:(id)id completionHandler:(id /* block */)handler;
- (id)observeAllDrafts;
- (id)observeDraftConvId:(id)id;
- (id)observeDraftConvId:(id)id;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainDraftsRepo_Protocol_h */
