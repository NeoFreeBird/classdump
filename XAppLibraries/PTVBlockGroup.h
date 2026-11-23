//
#ifndef PTVBlockGroup_h
#define PTVBlockGroup_h
@import Foundation;

#include "PTVSignal.h"

@class NSArray, NSObject;

@interface PTVBlockGroup : NSObject {
    /* instance variables */
    NSArray *_blocks;
    unsigned long long _waitingOn;
    int _received;
    PTVSignal *_signal;
}

/* class methods */
+ (id)groupWithBlocks:(id)blocks;

/* instance methods */
- (id)initWithBlocks:(id)blocks;
- (void)received;
- (void)then:(id)then;

@end

#endif /* PTVBlockGroup_h */
