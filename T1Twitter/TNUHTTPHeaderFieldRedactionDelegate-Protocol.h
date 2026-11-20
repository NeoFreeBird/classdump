//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUHTTPHeaderFieldRedactionDelegate_Protocol_h
#define TNUHTTPHeaderFieldRedactionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNUHTTPHeaderFieldRedactionDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)har_shouldRedactHTTPHeaderField:(id)field;

@optional

@end

#endif /* TNUHTTPHeaderFieldRedactionDelegate_Protocol_h */
