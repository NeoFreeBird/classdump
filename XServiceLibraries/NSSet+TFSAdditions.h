//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSSet_TFSAdditions_h
#define NSSet_TFSAdditions_h
@import Foundation;

@interface NSSet (TFSAdditions)

/* class methods */
+ (id)tfs_setWithUnionedSets:(id)sets;

/* instance methods */
- (id)tfs_map:(SEL)tfs_map;
- (id)tfs_map:(SEL)tfs_map withObject:(id)object;
- (id)tfs_map:(SEL)tfs_map withObject:(id)object withObject:(id)object;
- (id)tfs_mapWithBlock:(id /* block */)block;
- (id)tfs_setByRemovingObjectsFromSet:(id)set;

@end

#endif /* NSSet_TFSAdditions_h */
