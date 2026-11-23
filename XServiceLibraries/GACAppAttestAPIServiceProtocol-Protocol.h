//
#ifndef GACAppAttestAPIServiceProtocol_Protocol_h
#define GACAppAttestAPIServiceProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACAppAttestAPIServiceProtocol <NSObject>

@required

/* required instance methods */
- (id)getRandomChallenge;
- (id)attestKeyWithAttestation:(id)attestation keyID:(id)id challenge:(id)challenge limitedUse:(_Bool)use;
- (id)getAppCheckTokenWithArtifact:(id)artifact challenge:(id)challenge assertion:(id)assertion limitedUse:(_Bool)use;

@optional

@end

#endif /* GACAppAttestAPIServiceProtocol_Protocol_h */
