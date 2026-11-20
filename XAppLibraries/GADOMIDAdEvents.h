//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDAdEvents_h
#define GADOMIDAdEvents_h
@import Foundation;

#include "GADOMIDAdSession.h"

@class NSObject;

@interface GADOMIDAdEvents : NSObject {
    /* instance variables */
    GADOMIDAdSession *_adSession;
}

/* instance methods */
- (id)initWithAdSession:(id)session error:(id *)error;
- (_Bool)impressionOccurredWithError:(id *)error;
- (_Bool)loadedWithError:(id *)error;
- (_Bool)loadedWithVastProperties:(id)properties error:(id *)error;
- (void)startSessionIfNeeded;

@end

#endif /* GADOMIDAdEvents_h */
