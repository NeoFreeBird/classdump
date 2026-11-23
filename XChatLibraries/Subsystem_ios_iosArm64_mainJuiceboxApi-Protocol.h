//
#ifndef Subsystem_ios_iosArm64_mainJuiceboxApi_Protocol_h
#define Subsystem_ios_iosArm64_mainJuiceboxApi_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainJuiceboxApi

@required

/* required instance methods */
- (void)recoverUserPrivateKeyPinKey:(id)key juiceboxConfig:(id)config completionHandler:(id /* block */)handler;
- (void)recoverUserPrivateKeyPinKey:(id)key juiceboxConfig:(id)config completionHandler:(id /* block */)handler;
- (void)registerUserPrivateKeyPinKey:(id)key juiceboxConfig:(id)config secret:(id)secret completionHandler:(id /* block */)handler;
- (void)registerUserPrivateKeyPinKey:(id)key juiceboxConfig:(id)config secret:(id)secret completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainJuiceboxApi_Protocol_h */
