//
#ifndef GACAppAttestAttestationResponse_h
#define GACAppAttestAttestationResponse_h
@import Foundation;

#include "GACAppCheckToken.h"

@class NSData, NSObject;

@interface GACAppAttestAttestationResponse : NSObject

@property (readonly, nonatomic) NSData *artifact;
@property (readonly, nonatomic) GACAppCheckToken *token;

/* instance methods */
- (id)initWithArtifact:(id)artifact token:(id)token;
- (id)initWithResponseData:(id)data requestDate:(id)date error:(id *)error;

@end

#endif /* GACAppAttestAttestationResponse_h */
