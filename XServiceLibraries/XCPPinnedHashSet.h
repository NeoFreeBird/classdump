//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XCPPinnedHashSet_h
#define XCPPinnedHashSet_h
@import Foundation;

@class NSObject, NSSet;

@interface XCPPinnedHashSet : NSObject // (Swift)

@property (nonatomic, readonly) NSSet *sha1Hashes;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;

@end

#endif /* XCPPinnedHashSet_h */
