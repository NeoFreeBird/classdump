//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwiftP33_95F21C00624F16120340BD95D99F151833T1UnifiedCardPlayableEventHandler_h
#define _TtC14T1TwitterSwiftP33_95F21C00624F16120340BD95D99F151833T1UnifiedCardPlayableEventHandler_h
@import Foundation;

#include "TUCPlayableEventHandler-Protocol.h"

@class NSObject;

@interface T1TwitterSwift.(T1UnifiedCardPlayableEventHandler in _95F21C00624F16120340BD95D99F1518) : NSObject <TUCPlayableEventHandler> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *context;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *status;
}

/* instance methods */
- (void)handlePlayableEvent:(id)event presentingViewController:(id)controller;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwiftP33_95F21C00624F16120340BD95D99F151833T1UnifiedCardPlayableEventHandler_h */
