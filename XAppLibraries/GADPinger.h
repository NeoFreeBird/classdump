//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
