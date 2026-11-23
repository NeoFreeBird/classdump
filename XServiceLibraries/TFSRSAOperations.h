//
#ifndef TFSRSAOperations_h
#define TFSRSAOperations_h
@import Foundation;

@class NSObject;

@interface TFSRSAOperations : NSObject

/* class methods */
+ (id)publicKeyTagForUserid:(long long)userid;
+ (id)publicKeyQueryDictionaryForUserid:(long long)userid;
+ (id)privateKeyTagForUserid:(long long)userid;
+ (id)privateKeyQueryDictionaryForUserid:(long long)userid;
+ (void)deleteKeyPairForUser:(long long)user;
+ (void)generateKeyPairForUser:(long long)user;
+ (id)signData:(id)data forUser:(long long)user;
+ (id)base64PublicKeyForUser:(long long)user;

@end

#endif /* TFSRSAOperations_h */
