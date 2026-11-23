//
#ifndef TFSReplySortingState_h
#define TFSReplySortingState_h
@import Foundation;

@class NSObject;

@interface TFSReplySortingState : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 rankingMode;
}

@property (nonatomic, readonly) _Bool isSortedByRelevance;
@property (nonatomic, readonly) _Bool isSortedByRecency;
@property (nonatomic, readonly) _Bool isSortedByLikes;

/* instance methods */
- (id)init;
- (void)sortByRelevance;
- (void)sortByRecency;
- (void)sortByLikes;

@end

#endif /* TFSReplySortingState_h */
