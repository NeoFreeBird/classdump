//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLSOutputStream_Protocol_h
#define TLSOutputStream_Protocol_h
@import Foundation;

#include "TLSFiltering-Protocol.h"

@protocol TLSOutputStream <TLSFiltering>

@required

/* required instance methods */
- (void)tls_outputLogInfo:(id)info;

@optional

/* optional instance methods */
- (void)tls_flush;

@end

#endif /* TLSOutputStream_Protocol_h */
