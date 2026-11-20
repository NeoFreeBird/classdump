//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLSFiltering_Protocol_h
#define TLSFiltering_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLSFiltering <NSObject>

@required

@optional

/* optional instance methods */
- (long long)tls_shouldFilterLevel:(long long)level channel:(id)channel contextObject:(id)object;

@end

#endif /* TLSFiltering_Protocol_h */
