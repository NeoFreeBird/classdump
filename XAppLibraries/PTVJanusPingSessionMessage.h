//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVJanusPingSessionMessage_h
#define PTVJanusPingSessionMessage_h
@import Foundation;

#include "PTVJanusMessage.h"

@interface PTVJanusPingSessionMessage : PTVJanusMessage

@property (readonly, nonatomic) unsigned long long sessionId;

/* instance methods */
- (id)initWithSessionId:(unsigned long long)id;
- (id)JSONDictionary;

@end

#endif /* PTVJanusPingSessionMessage_h */
