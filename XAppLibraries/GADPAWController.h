//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADPAWController_h
#define GADPAWController_h
@import Foundation;

#include "GADPAWScriptMessageHandler.h"

@class NSObject;

@interface GADPAWController : NSObject {
    /* instance variables */
    GADPAWScriptMessageHandler *_scriptMessageHandler;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)registerWebView:(id)view;

@end

#endif /* GADPAWController_h */
