//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSLogListener_Protocol_h
#define LHLSLogListener_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol LHLSLogListener <NSObject>

@required

/* required instance methods */
- (void)lhls_logWithLevel:(long long)level file:(id)file line:(int)line message:(id)message;
- (void)lhls_logWithLevel:(long long)level file:(id)file line:(int)line message:(id)message;

@optional

@end

#endif /* LHLSLogListener_Protocol_h */
