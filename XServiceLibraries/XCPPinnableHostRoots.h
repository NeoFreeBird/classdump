//
#ifndef XCPPinnableHostRoots_h
#define XCPPinnableHostRoots_h
@import Foundation;

@class NSObject, NSSet;

@interface XCPPinnableHostRoots : NSObject // (Swift)

@property (nonatomic, readonly) NSSet *roots;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (_Bool)isPinnableWithHost:(id)host;

@end

#endif /* XCPPinnableHostRoots_h */
