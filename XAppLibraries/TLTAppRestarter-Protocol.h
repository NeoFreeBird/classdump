//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLTAppRestarter_Protocol_h
#define TLTAppRestarter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLTAppRestarter <NSObject>

@required

/* required instance methods */
- (void)requestRestartFromComponent:(id)component;
- (id)suppressRestarts;
- (void)resumeRestartsWithToken:(id)token;

@optional

@end

#endif /* TLTAppRestarter_Protocol_h */
