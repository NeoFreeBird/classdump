//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
