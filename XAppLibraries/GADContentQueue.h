//
#ifndef GADContentQueue_h
#define GADContentQueue_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary, NSObject;

@interface GADContentQueue : NSObject {
    /* instance variables */
    NSMutableDictionary *_contents;
    NSMutableArray *_sequenceNumbers;
    unsigned long long _size;
}

/* instance methods */
- (id)initWithQueueSize:(long long)size;
- (id)contentWithHighestScore;
- (void)deduplicate:(id)deduplicate;
- (void)enqueueContent:(id)content;

@end

#endif /* GADContentQueue_h */
