//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPInspectableCache_Protocol_h
#define TIPInspectableCache_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPInspectableCache <NSObject>

@required

/* required instance methods */
- (void)inspect:(id /* block */)inspect;

@optional

@end

#endif /* TIPInspectableCache_Protocol_h */
