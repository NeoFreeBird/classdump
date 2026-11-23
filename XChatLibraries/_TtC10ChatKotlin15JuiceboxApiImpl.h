//
#ifndef _TtC10ChatKotlin15JuiceboxApiImpl_h
#define _TtC10ChatKotlin15JuiceboxApiImpl_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainJuiceboxApi-Protocol.h"

@class NSString, Subsystem_ios_iosArm64_mainDmJuiceboxConfig, Subsystem_ios_iosArm64_mainKotlinByteArray, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p, _TtCs12_SwiftObject;

@interface ChatKotlin.JuiceboxApiImpl : Swift._SwiftObject <Subsystem_ios_iosArm64_mainJuiceboxApi> { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
}

/* instance methods */
- (void)registerUserPrivateKeyPinKey:(NSString *)key juiceboxConfig:(Subsystem_ios_iosArm64_mainDmJuiceboxConfig *)config secret:(Subsystem_ios_iosArm64_mainKotlinByteArray *)secret completionHandler:(id /* block */)handler;
- (void)recoverUserPrivateKeyPinKey:(NSString *)key juiceboxConfig:(Subsystem_ios_iosArm64_mainDmJuiceboxConfig *)config completionHandler:(id /* block */)handler;

@end

#endif /* _TtC10ChatKotlin15JuiceboxApiImpl_h */
