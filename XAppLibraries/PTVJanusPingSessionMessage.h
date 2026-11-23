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
