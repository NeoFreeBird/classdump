//
#ifndef Subsystem_ios_iosArm64_mainNonSuspendingKeyFactory_Protocol_h
#define Subsystem_ios_iosArm64_mainNonSuspendingKeyFactory_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainNonSuspendingKeyFactory

@required

/* required instance methods */
- (id)computeSharedSecretPublicKey:(id)key privateKey:(id)key;
- (id)computeSharedSecretPublicKey:(id)key privateKey:(id)key;
- (id)decryptBytesWithPrivateKeyPrivateKey:(id)key bytes:(id)bytes;
- (id)decryptBytesWithPrivateKeyPrivateKey:(id)key bytes:(id)bytes;
- (id)encryptBytesWithPublicKeyPublicKey:(id)key bytes:(id)bytes;
- (id)encryptBytesWithPublicKeyPublicKey:(id)key bytes:(id)bytes;
- (id)generateConversationKey;
- (id)generateKeyPairPurpose:(id)purpose;
- (id)generateKeyPairPurpose:(id)purpose;
- (id)getKeyPairFromPrivateKeyBytesPrivateKeyBytes:(id)bytes;
- (id)getKeyPairFromPrivateKeyBytesPrivateKeyBytes:(id)bytes;
- (id)getValidPrivateKeyBytesFromRandomBytesSeed:(id)seed;
- (id)getValidPrivateKeyBytesFromRandomBytesSeed:(id)seed;
- (_Bool)isSignatureValidPublicKey:(id)key signature:(id)signature payload:(id)payload;
- (_Bool)isSignatureValidPublicKey:(id)key signature:(id)signature payload:(id)payload;
- (id)reconstructConversationKeyFromBytesBytes:(id)bytes;
- (id)reconstructConversationKeyFromBytesBytes:(id)bytes;
- (id)reconstructPrivateKeyFromBytesPrivateKeyBytes:(id)bytes publicKeyBytes:(id)bytes purpose:(id)purpose;
- (id)reconstructPrivateKeyFromBytesPrivateKeyBytes:(id)bytes publicKeyBytes:(id)bytes purpose:(id)purpose;
- (id)reconstructPublicKeyFromBytesBytes:(id)bytes purpose:(id)purpose;
- (id)reconstructPublicKeyFromBytesBytes:(id)bytes purpose:(id)purpose;
- (id)signWithPrivateKeyPrivateKey:(id)key payload:(id)payload;
- (id)signWithPrivateKeyPrivateKey:(id)key payload:(id)payload;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainNonSuspendingKeyFactory_Protocol_h */
