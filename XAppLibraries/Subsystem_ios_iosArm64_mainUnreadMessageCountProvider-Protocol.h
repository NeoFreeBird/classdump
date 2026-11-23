//
#ifndef Subsystem_ios_iosArm64_mainUnreadMessageCountProvider_Protocol_h
#define Subsystem_ios_iosArm64_mainUnreadMessageCountProvider_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainUnreadMessageCountProvider

@required

/* required instance methods */
- (id)observeUnreadMessageCount;
- (id)observeUnreadMessageCountByConversation;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainUnreadMessageCountProvider_Protocol_h */
