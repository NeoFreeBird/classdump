//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
