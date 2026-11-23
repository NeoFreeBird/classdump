//
#ifndef NSMutableOrderedSet_TFSAdditions_h
#define NSMutableOrderedSet_TFSAdditions_h
@import Foundation;

@interface NSMutableOrderedSet (TFSAdditions)

/* instance methods */
- (void)tfs_moveObjectIfNotNil:(id)nil atIndex:(unsigned long long)index passingTest:(id /* block */)test;

@end

#endif /* NSMutableOrderedSet_TFSAdditions_h */
