//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC15XAppAttestation16AttestationToken_h
#define _TtC15XAppAttestation16AttestationToken_h
@import Foundation;

@class NSDate, NSObject, NSString, XAppAttestation.AttestationClientData, _$s10Foundation4DateVMn, _$sSS;

@interface XAppAttestation.AttestationToken : NSObject { // (Swift)
    /* instance variables */
    XAppAttestation.AttestationClientData clientData;
}

@property (nonatomic, readonly) _Bool isExpired;
@property (nonatomic, readonly) NSString *userId;
@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly) NSString *keyID;

/* instance methods */
- (_Bool)willBeExpiredBy:(id)by;
- (id)tokenClaims;
- (id)init;

@end

#endif /* _TtC15XAppAttestation16AttestationToken_h */
