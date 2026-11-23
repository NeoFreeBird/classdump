//
#ifndef XCPX509CertificateUtilities_h
#define XCPX509CertificateUtilities_h
@import Foundation;

@class NSObject;

@interface XCPX509CertificateUtilities : NSObject // (Swift)

/* class methods */
+ (id)spkiSHA1:(struct __SecCertificate *)sha1;
+ (id)certificateSHA1Fingerprint:(struct __SecCertificate *)fingerprint;

/* instance methods */
- (id)init;

@end

#endif /* XCPX509CertificateUtilities_h */
