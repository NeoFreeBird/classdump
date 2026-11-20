//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACAppAttestArtifactStorageProtocol_Protocol_h
#define GACAppAttestArtifactStorageProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACAppAttestArtifactStorageProtocol <NSObject>

@required

/* required instance methods */
- (id)setArtifact:(id)artifact forKey:(id)key;
- (id)getArtifactForKey:(id)key;

@optional

@end

#endif /* GACAppAttestArtifactStorageProtocol_Protocol_h */
