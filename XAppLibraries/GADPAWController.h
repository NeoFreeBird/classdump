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
