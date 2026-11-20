//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSPlayerClientDelegate_Protocol_h
#define LHLSPlayerClientDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol LHLSPlayerClientDelegate <NSObject>

@required

/* required instance methods */
- (void)receivedData;

@optional

@end

#endif /* LHLSPlayerClientDelegate_Protocol_h */
