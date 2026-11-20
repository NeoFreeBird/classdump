//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACAppAttestKeyAttestationResult_h
#define GACAppAttestKeyAttestationResult_h
@import Foundation;

@class NSData, NSObject, NSString;

@interface GACAppAttestKeyAttestationResult : NSObject

@property (readonly, nonatomic) NSString *keyID;
@property (readonly, nonatomic) NSData *challenge;
@property (readonly, nonatomic) NSData *attestation;

/* instance methods */
- (id)initWithKeyID:(id)id challenge:(id)challenge attestation:(id)attestation;

@end

#endif /* GACAppAttestKeyAttestationResult_h */
