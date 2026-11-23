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
