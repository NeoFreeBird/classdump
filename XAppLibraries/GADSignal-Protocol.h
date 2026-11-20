//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADSignal_Protocol_h
#define GADSignal_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADSignal <NSObject>

@required

/* required instance methods */
- (void)addSignalEntriesToMutableDictionary:(id)dictionary;

@optional

@end

#endif /* GADSignal_Protocol_h */
