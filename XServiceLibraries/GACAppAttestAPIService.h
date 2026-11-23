//
#ifndef GACAppAttestAPIService_h
#define GACAppAttestAPIService_h
@import Foundation;

#include "GACAppAttestAPIServiceProtocol-Protocol.h"
#include "GACAppCheckAPIServiceProtocol-Protocol.h"

@class NSObject, NSString;

@interface GACAppAttestAPIService : NSObject <GACAppAttestAPIServiceProtocol>

@property (readonly, nonatomic) id <GACAppCheckAPIServiceProtocol> APIService;
@property (readonly, nonatomic) NSString *resourceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)URLWithBaseURL:(id)url resourceName:(id)name;

/* instance methods */
- (id)initWithAPIService:(id)apiservice resourceName:(id)name;
- (id)getAppCheckTokenWithArtifact:(id)artifact challenge:(id)challenge assertion:(id)assertion limitedUse:(_Bool)use;
- (id)getRandomChallenge;
- (id)randomChallengeWithAPIResponse:(id)apiresponse;
- (id)randomChallengeFromResponseBody:(id)body error:(id *)error;
- (id)attestKeyWithAttestation:(id)attestation keyID:(id)id challenge:(id)challenge limitedUse:(_Bool)use;
- (id)HTTPBodyWithArtifact:(id)artifact challenge:(id)challenge assertion:(id)assertion limitedUse:(_Bool)use;
- (id)HTTPBodyWithAttestation:(id)attestation keyID:(id)id challenge:(id)challenge limitedUse:(_Bool)use;
- (id)HTTPBodyWithJSONObject:(id)jsonobject;
- (id)base64StringWithData:(id)data;
- (id)URLForEndpoint:(id)endpoint;
- (id)backgroundQueue;

@end

#endif /* GACAppAttestAPIService_h */
