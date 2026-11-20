//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TApplicationException_h
#define TApplicationException_h
@import Foundation;

#include "TException.h"

@interface TApplicationException : TException {
    /* instance variables */
    int mType;
}

/* class methods */
+ (id)read:(id)read;
+ (id)exceptionWithType:(int)type reason:(id)reason;

/* instance methods */
- (id)initWithType:(int)type reason:(id)reason;
- (void)write:(id)write;

@end

#endif /* TApplicationException_h */
