//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSAAuthorizationObserver_h
#define TSAAuthorizationObserver_h
@import Foundation;

#include "TSAContext-Protocol.h"

@class NSObject;

@interface TSAAuthorizationObserver : NSObject {
    /* instance variables */
    long long _observerId;
    long long _serviceType;
    id <TSAContext> _context;
    id /* block */ _updateBlock;
}

/* instance methods */
- (id)initWithServiceType:(long long)type context:(id)context updateBlock:(id /* block */)block;
- (void)_tsa_authStatusUpdated:(id)updated;

@end

#endif /* TSAAuthorizationObserver_h */
