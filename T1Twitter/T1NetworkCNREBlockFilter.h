//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1NetworkCNREBlockFilter_h
#define T1NetworkCNREBlockFilter_h
@import Foundation;

#include "T1NetworkCNREFilter-Protocol.h"

@class NSObject, NSString;

@interface T1NetworkCNREBlockFilter : NSObject <T1NetworkCNREFilter> {
    /* instance variables */
    id /* block */ _block;
    NSString *_eventType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBlock:(id /* block */)block eventType:(id)type;
- (_Bool)shouldCaptureCNREForAttempt:(id)attempt;
- (id)eventType;

@end

#endif /* T1NetworkCNREBlockFilter_h */
