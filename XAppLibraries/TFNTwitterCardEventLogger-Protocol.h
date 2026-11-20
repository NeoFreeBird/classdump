//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCardEventLogger_Protocol_h
#define TFNTwitterCardEventLogger_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterCardEventLogger <NSObject>

@required

/* required instance methods */
- (void)logEvent:(id)event;

@optional

@end

#endif /* TFNTwitterCardEventLogger_Protocol_h */
