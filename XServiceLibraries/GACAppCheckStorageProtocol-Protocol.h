//
#ifndef GACAppCheckStorageProtocol_Protocol_h
#define GACAppCheckStorageProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACAppCheckStorageProtocol <NSObject>

@required

/* required instance methods */
- (id)setToken:(id)token;
- (id)getToken;

@optional

@end

#endif /* GACAppCheckStorageProtocol_Protocol_h */
