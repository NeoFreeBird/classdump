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
