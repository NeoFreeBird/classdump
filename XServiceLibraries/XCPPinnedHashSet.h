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
