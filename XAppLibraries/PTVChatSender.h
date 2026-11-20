//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatSender_h
#define PTVChatSender_h
@import Foundation;

#include "PTVChatOccupant.h"

@interface PTVChatSender : PTVChatOccupant

/* instance methods */
- (id)initWithDict:(id)dict;

@end

#endif /* PTVChatSender_h */
