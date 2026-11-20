//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1GrokTranslationDelegate_h
#define T1GrokTranslationDelegate_h
@import Foundation;

#include "_TtP4Grok17GrokAuthenticable_-Protocol.h"

@class NSObject;

@interface T1GrokTranslationDelegate : NSObject <Grok.GrokAuthenticable> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
}

/* instance methods */
- (id)authenticateRequestWithSourceRequest:(id)request parameters:(id)parameters;
- (id)initWithAccount:(id)account;
- (id)init;

@end

#endif /* T1GrokTranslationDelegate_h */
