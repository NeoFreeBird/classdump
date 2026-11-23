//
#ifndef GADPinger_h
#define GADPinger_h
@import Foundation;

#include "GADURLSession.h"

@class NSObject;

@interface GADPinger : NSObject {
    /* instance variables */
    GADURLSession *_pingerSession;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)pingURL:(id)url context:(id)context queue:(id)queue completionBlock:(id /* block */)block;

@end

#endif /* GADPinger_h */
