//
#ifndef Subsystem_ios_iosArm64_mainMinimalBaseDmObjectGraph_Protocol_h
#define Subsystem_ios_iosArm64_mainMinimalBaseDmObjectGraph_Protocol_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainIsGraphDestroyedProvider-Protocol.h"
#include "Subsystem_ios_iosArm64_mainUnreadMessageCountProvider-Protocol.h"
#include "Subsystem_ios_iosArm64_mainXChatExceptionObserver-Protocol.h"
#include "Subsystem_ios_iosArm64_mainXChatFeatureSwitches-Protocol.h"

@protocol Subsystem_ios_iosArm64_mainChatToastObserver, Subsystem_ios_iosArm64_mainFeedbackCardStateRepo, Subsystem_ios_iosArm64_mainNotificationAttachmentResolver, Subsystem_ios_iosArm64_mainNotificationProcessor, Subsystem_ios_iosArm64_mainXChatFailureScriber;

@protocol Subsystem_ios_iosArm64_mainMinimalBaseDmObjectGraph <Subsystem_ios_iosArm64_mainIsGraphDestroyedProvider>

@required

@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainXChatExceptionObserver> exceptionObserver;
@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainXChatFailureScriber> failureScriber;
@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainXChatFeatureSwitches> featureSwitches;
@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainFeedbackCardStateRepo> feedbackCardStateRepo;
@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainNotificationAttachmentResolver> notificationAttachmentResolver;
@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainNotificationProcessor> notificationProcessor;
@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainChatToastObserver> toastObserver;
@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainUnreadMessageCountProvider> unreadMessageCountProvider;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainMinimalBaseDmObjectGraph_Protocol_h */
