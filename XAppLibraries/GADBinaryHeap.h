//
#ifndef GADBinaryHeap_h
#define GADBinaryHeap_h
@import Foundation;

@class NSObject;

@interface GADBinaryHeap : NSObject {
    /* instance variables */
    struct __CFBinaryHeap * _heap;
}

@property (readonly, nonatomic) long long count;

/* instance methods */
- (id)initWithComparator:(void * /* function */)comparator;
- (void)dealloc;
- (void)addObjectToHeap:(id)heap;
- (_Bool)containsObject:(id)object;
- (id)minimum;
- (id)removedMinimum;
- (id)sortedObjects;

@end

#endif /* GADBinaryHeap_h */
