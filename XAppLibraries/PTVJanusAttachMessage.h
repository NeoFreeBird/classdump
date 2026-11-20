//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVJanusAttachMessage_h
#define PTVJanusAttachMessage_h
@import Foundation;

#include "PTVJanusMessage.h"

@class NSString;

@interface PTVJanusAttachMessage : PTVJanusMessage

@property (readonly, nonatomic) NSString *plugin;

/* instance methods */
- (id)initWithPlugin:(id)plugin;
- (id)JSONDictionary;

@end

#endif /* PTVJanusAttachMessage_h */
