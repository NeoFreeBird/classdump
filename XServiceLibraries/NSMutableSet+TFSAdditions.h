//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSMutableSet_TFSAdditions_h
#define NSMutableSet_TFSAdditions_h
@import Foundation;

@interface NSMutableSet (TFSAdditions)

/* instance methods */
- (void)tfs_addObjectIfNotNil:(id)nil;

@end

#endif /* NSMutableSet_TFSAdditions_h */
