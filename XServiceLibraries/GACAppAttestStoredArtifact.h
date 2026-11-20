//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACAppAttestStoredArtifact_h
#define GACAppAttestStoredArtifact_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSObject, NSString;

@interface GACAppAttestStoredArtifact : NSObject <NSSecureCoding>

@property (readonly, nonatomic) NSString *keyID;
@property (readonly, nonatomic) NSData *artifact;
@property (readonly, nonatomic) long long storageVersion;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithKeyID:(id)id artifact:(id)artifact;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;

@end

#endif /* GACAppAttestStoredArtifact_h */
