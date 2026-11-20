//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSCircularFIFOBuffer_h
#define TFSCircularFIFOBuffer_h
@import Foundation;

#include "NSFastEnumeration-Protocol.h"
#include "TFSCircularFIFOBufferDelegate-Protocol.h"

@class NSMutableArray, NSObject;

@interface TFSCircularFIFOBuffer : NSObject <NSFastEnumeration> {
    /* instance variables */
    unsigned long long _mutatingInteger;
    unsigned long long _start;
    NSMutableArray *_buffer;
}

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long count;
@property (weak, nonatomic) id <TFSCircularFIFOBufferDelegate> delegate;

/* instance methods */
- (id)initWithSize:(unsigned long long)size;
- (id)init;
- (void)addObject:(id)object;
- (id)removeObject;
- (id)peekObject;
- (id)allObjects;
- (void)removeAllObjects;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)state objects:(id *)objects count:(unsigned long long)count;

@end

#endif /* TFSCircularFIFOBuffer_h */
