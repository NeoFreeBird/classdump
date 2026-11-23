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
