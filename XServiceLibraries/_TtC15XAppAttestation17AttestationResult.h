//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC15XAppAttestation17AttestationResult_h
#define _TtC15XAppAttestation17AttestationResult_h
@import Foundation;

@class NSObject, NSString, _$sSS;

@interface XAppAttestation.AttestationResult : NSObject // (Swift)

@property (nonatomic, readonly) NSString *keyID;
@property (nonatomic, readonly) NSString *signedHash;
@property (nonatomic, readonly) NSString *headerValue;

/* instance methods */
- (id)initWithKeyID:(id)id signedHash:(id)hash;
- (id)init;

@end

#endif /* _TtC15XAppAttestation17AttestationResult_h */
