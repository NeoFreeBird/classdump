//
#ifndef PTVJanusMessageToVideoRoomPlugin_h
#define PTVJanusMessageToVideoRoomPlugin_h
@import Foundation;

#include "PTVJanusMessage.h"

@class NSDictionary;

@interface PTVJanusMessageToVideoRoomPlugin : PTVJanusMessage

@property (readonly, nonatomic) NSDictionary *body;
@property (readonly, nonatomic) NSDictionary *jsep;

/* instance methods */
- (id)initWithBody:(id)body jsep:(id)jsep;
- (id)JSONDictionary;

@end

#endif /* PTVJanusMessageToVideoRoomPlugin_h */
