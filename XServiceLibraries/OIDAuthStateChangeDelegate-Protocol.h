//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OIDAuthStateChangeDelegate_Protocol_h
#define OIDAuthStateChangeDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OIDAuthStateChangeDelegate <NSObject>

@required

/* required instance methods */
- (void)didChangeState:(id)state;

@optional

@end

#endif /* OIDAuthStateChangeDelegate_Protocol_h */
