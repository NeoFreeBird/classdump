//
#ifndef TNUX509Certificate_h
#define TNUX509Certificate_h
@import Foundation;

@class NSData, NSObject, NSString;

@interface TNUX509Certificate : NSObject {
    /* instance variables */
    NSString *_fingerprint;
    NSData *_publicKey;
    NSData *_certificateData;
}

@property (readonly, nonatomic) struct __SecCertificate * certificate;
@property (readonly, nonatomic) NSData *DERCertificateData;

/* instance methods */
- (id)initWithCertificate:(struct __SecCertificate *)certificate;
- (id)initWithDERCertificateData:(id)data;
- (void)dealloc;
- (id)subjectSummary;
- (id)fingerprint;
- (id)publicKey;

@end

#endif /* TNUX509Certificate_h */
