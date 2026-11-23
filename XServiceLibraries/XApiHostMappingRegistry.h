//
#ifndef XApiHostMappingRegistry_h
#define XApiHostMappingRegistry_h
@import Foundation;

#include "XApiHostMapping-Protocol.h"

@class NSObject;

@interface XApiHostMappingRegistry : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 lock;
    B24@0:8@"NSString"16 registeredHostMapping;
}

@property (nonatomic, retain) id <XApiHostMapping> hostMapping;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;

@end

#endif /* XApiHostMappingRegistry_h */
