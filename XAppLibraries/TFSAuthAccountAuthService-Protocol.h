//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAuthAccountAuthService_Protocol_h
#define TFSAuthAccountAuthService_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAuthAccountAuthService <NSObject>

@required

/* required instance methods */
- (id)credentialForAccountID:(id)id;

@optional

@end

#endif /* TFSAuthAccountAuthService_Protocol_h */
