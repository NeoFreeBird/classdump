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
