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
