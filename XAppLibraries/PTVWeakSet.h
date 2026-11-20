//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWeakSet_h
#define PTVWeakSet_h
@import Foundation;

@class NSMutableArray, NSObject;

@interface PTVWeakSet : NSObject

@property (readonly, nonatomic) NSMutableArray *members;

/* instance methods */
- (id)init;
- (_Bool)containsObject:(id)object;
- (id)indexesOfObject:(id)object;
- (_Bool)isEmpty;
- (void)enumerateMembers:(id /* block */)members;
- (void)addObject:(id)object;
- (void)removeObject:(id)object;
- (void)compact;
- (id)indexesOfMembersToCompact;

@end

#endif /* PTVWeakSet_h */
