//
#ifndef _TtC14PaymentsCrypto12JWEEncryptor_h
#define _TtC14PaymentsCrypto12JWEEncryptor_h
@import Foundation;

@class PaymentsCrypto.AESEncryptor, PaymentsCrypto.KeyInfoProvider, PaymentsCrypto.RSAEncryptor, PaymentsCrypto.RandomGenerator, _TtCs12_SwiftObject;

@interface PaymentsCrypto.JWEEncryptor : Swift._SwiftObject { // (Swift)
    /* instance variables */
    PaymentsCrypto.RandomGenerator randomGenerator;
    PaymentsCrypto.KeyInfoProvider keyInfoProvider;
    PaymentsCrypto.RSAEncryptor rsaEncryptor;
    PaymentsCrypto.AESEncryptor aesEncryptor;
}

@end

#endif /* _TtC14PaymentsCrypto12JWEEncryptor_h */
