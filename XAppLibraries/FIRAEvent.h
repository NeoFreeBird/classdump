//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRAEvent_h
#define FIRAEvent_h
@import Foundation;

#include "APMEvent.h"
#include "NSCopying-Protocol.h"

@interface FIRAEvent : APMEvent <NSCopying>

@end

#endif /* FIRAEvent_h */
