//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok21GrokWeakAuthenticable_h
#define _TtC4Grok21GrokWeakAuthenticable_h
@import Foundation;

#include "_TtP4Grok17GrokAuthenticable_-Protocol.h"

@class Grok0A13Authenticable_pSgXw, _TtCs12_SwiftObject;

@interface Grok.GrokWeakAuthenticable : Swift._SwiftObject <Grok.GrokAuthenticable> { // (Swift)
    /* instance variables */
    Grok0A13Authenticable_pSgXw account;
}

/* instance methods */
- (id)authenticateRequestWithSourceRequest:(id)request parameters:(id)parameters;

@end

#endif /* _TtC4Grok21GrokWeakAuthenticable_h */
