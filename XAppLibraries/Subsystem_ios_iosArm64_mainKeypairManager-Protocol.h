//
#ifndef Subsystem_ios_iosArm64_mainKeypairManager_Protocol_h
#define Subsystem_ios_iosArm64_mainKeypairManager_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainKeypairManager

@required

/* required instance methods */
- (void)autoEnrollManagedKeypairWithCompletionHandler:(id /* block */)handler;
- (void)autoEnrollManagedKeypairWithCompletionHandler:(id /* block */)handler;
- (void)changePinNewPinKey:(id)key completionHandler:(id /* block */)handler;
- (void)changePinNewPinKey:(id)key completionHandler:(id /* block */)handler;
- (void)checkLatestKeypairConsistencyWithCompletionHandler:(id /* block */)handler;
- (void)checkLatestKeypairConsistencyWithCompletionHandler:(id /* block */)handler;
- (void)checkLocalKeypairsWithCompletionHandler:(id /* block */)handler;
- (void)checkLocalKeypairsWithCompletionHandler:(id /* block */)handler;
- (void)createAndRegisterNewKeypairPin:(id)pin completionHandler:(id /* block */)handler;
- (void)createAndRegisterNewKeypairPin:(id)pin completionHandler:(id /* block */)handler;
- (void)createAndRegisterSelfCustodyKeypairWithCompletionHandler:(id /* block */)handler;
- (void)createAndRegisterSelfCustodyKeypairWithCompletionHandler:(id /* block */)handler;
- (void)fetchRegistrationStateWithCompletionHandler:(id /* block */)handler;
- (void)fetchRegistrationStateWithCompletionHandler:(id /* block */)handler;
- (void)generateTokenWithCompletionHandler:(id /* block */)handler;
- (void)generateTokenWithCompletionHandler:(id /* block */)handler;
- (void)hasHealthyLocalKeypairWithCompletionHandler:(id /* block */)handler;
- (void)hasHealthyLocalKeypairWithCompletionHandler:(id /* block */)handler;
- (void)isPermanentlySuspendedWithCompletionHandler:(id /* block */)handler;
- (void)isPermanentlySuspendedWithCompletionHandler:(id /* block */)handler;
- (void)migrateFromSelfCustodyPinKey:(id)key completionHandler:(id /* block */)handler;
- (void)migrateFromSelfCustodyPinKey:(id)key completionHandler:(id /* block */)handler;
- (void)migrateToSelfCustodyPinKey:(id)key completionHandler:(id /* block */)handler;
- (void)migrateToSelfCustodyPinKey:(id)key completionHandler:(id /* block */)handler;
- (id)observeHasHealthyLocalKeypair;
- (id)observeLocalKeypairCheck;
- (void)recoverExistingKeypairsAndMaybeRegisterWithBackendPinKey:(id)key completionHandler:(id /* block */)handler;
- (void)recoverExistingKeypairsAndMaybeRegisterWithBackendPinKey:(id)key completionHandler:(id /* block */)handler;
- (void)recoverExistingKeypairsFromOneTimeCodeOneTimeCode:(id)code randToken:(id)token completionHandler:(id /* block */)handler;
- (void)recoverExistingKeypairsFromOneTimeCodeOneTimeCode:(id)code randToken:(id)token completionHandler:(id /* block */)handler;
- (void)registerKeypairWithNewPinNewPin:(id)pin completionHandler:(id /* block */)handler;
- (void)registerKeypairWithNewPinNewPin:(id)pin completionHandler:(id /* block */)handler;
- (void)runInboxKeypairChecksWithCompletionHandler:(id /* block */)handler;
- (void)runInboxKeypairChecksWithCompletionHandler:(id /* block */)handler;
- (void)scribePasscodeMismatch;
- (void)scribePasscodeShownEntry:(id)entry;
- (void)scribePasscodeShownEntry:(id)entry;
- (void)scribePasscodeTappedTap:(id)tap;
- (void)scribePasscodeTappedTap:(id)tap;
- (void)verifyExistingPinPinKey:(id)key shouldRegister:(_Bool)_register shouldGenerateSigningKey:(_Bool)key completionHandler:(id /* block */)handler;
- (void)verifyExistingPinPinKey:(id)key shouldRegister:(_Bool)_register shouldGenerateSigningKey:(_Bool)key completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainKeypairManager_Protocol_h */
