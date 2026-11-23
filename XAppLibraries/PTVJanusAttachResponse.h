//
#ifndef PTVJanusAttachResponse_h
#define PTVJanusAttachResponse_h
@import Foundation;

#include "PTVJanusResponse.h"

@interface PTVJanusAttachResponse : PTVJanusResponse

@property (nonatomic) unsigned long long pluginId;

/* class methods */
+ (id)responseFromJSONDictionary:(id)jsondictionary;

@end

#endif /* PTVJanusAttachResponse_h */
