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
