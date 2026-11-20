//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVJanusCreateSessionResponse_h
#define PTVJanusCreateSessionResponse_h
@import Foundation;

#include "PTVJanusResponse.h"

@interface PTVJanusCreateSessionResponse : PTVJanusResponse

/* class methods */
+ (id)responseFromJSONDictionary:(id)jsondictionary;

@end

#endif /* PTVJanusCreateSessionResponse_h */
