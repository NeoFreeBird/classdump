//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDCommandPublisher_Protocol_h
#define GADOMIDCommandPublisher_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADOMIDCommandPublisher <NSObject>

@required

/* required instance methods */
- (void)publishCommand:(id)command;

@optional

@end

#endif /* GADOMIDCommandPublisher_Protocol_h */
