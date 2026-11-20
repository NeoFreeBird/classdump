//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
