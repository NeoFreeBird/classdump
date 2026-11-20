//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSMutableOrderedSet_TFSAdditions_h
#define NSMutableOrderedSet_TFSAdditions_h
@import Foundation;

@interface NSMutableOrderedSet (TFSAdditions)

/* instance methods */
- (void)tfs_moveObjectIfNotNil:(id)nil atIndex:(unsigned long long)index passingTest:(id /* block */)test;

@end

#endif /* NSMutableOrderedSet_TFSAdditions_h */
