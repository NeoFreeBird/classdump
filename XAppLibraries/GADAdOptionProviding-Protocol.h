//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdOptionProviding_Protocol_h
#define GADAdOptionProviding_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADAdOptionProviding <NSObject>

@required

/* required instance methods */
- (id)adOptionParameters;

@optional

@end

#endif /* GADAdOptionProviding_Protocol_h */
