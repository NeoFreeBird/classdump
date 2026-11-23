//
#ifndef Subsystem_ios_iosArm64_mainExternalAppIntegrationsRepo_Protocol_h
#define Subsystem_ios_iosArm64_mainExternalAppIntegrationsRepo_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainExternalAppIntegrationsRepo

@required

/* required instance methods */
- (void)disconnectClientApplicationId:(id)id completionHandler:(id /* block */)handler;
- (void)disconnectClientApplicationId:(id)id completionHandler:(id /* block */)handler;
- (void)dismissDormantTray;
- (id)observeDormantTrayVisible;
- (id)observeIntegrations;
- (void)refreshIntegrationsWithCompletionHandler:(id /* block */)handler;
- (void)refreshIntegrationsWithCompletionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainExternalAppIntegrationsRepo_Protocol_h */
