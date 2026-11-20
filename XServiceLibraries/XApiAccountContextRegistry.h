//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XApiAccountContextRegistry_h
#define XApiAccountContextRegistry_h
@import Foundation;

#include "XApiAccountContextProviding-Protocol.h"

@class NSObject;

@interface XApiAccountContextRegistry : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 lock;
    B24@0:8@"NSString"16 registeredProvider;
}

@property (nonatomic, retain) id <XApiAccountContextProviding> provider;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;

@end

#endif /* XApiAccountContextRegistry_h */
