//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
