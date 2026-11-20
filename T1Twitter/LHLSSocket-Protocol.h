//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSSocket_Protocol_h
#define LHLSSocket_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol LHLSSocket <NSObject>

@required

/* required instance methods */
- (void)send:(id)send;
- (void)send:(id)send completion:(id /* block */)completion;
- (void)shutdown;

@optional

@end

#endif /* LHLSSocket_Protocol_h */
