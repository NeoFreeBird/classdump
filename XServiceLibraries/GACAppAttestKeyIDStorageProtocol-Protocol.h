//
#ifndef GACAppAttestKeyIDStorageProtocol_Protocol_h
#define GACAppAttestKeyIDStorageProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACAppAttestKeyIDStorageProtocol <NSObject>

@required

/* required instance methods */
- (id)setAppAttestKeyID:(id)id;
- (id)getAppAttestKeyID;

@optional

@end

#endif /* GACAppAttestKeyIDStorageProtocol_Protocol_h */
