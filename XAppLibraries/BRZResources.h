//
#ifndef BRZResources_h
#define BRZResources_h
@import Foundation;

@class NSObject;

@interface BRZResources : NSObject // (Swift)

/* class methods */
+ (id)bundle;
+ (id)acknowledgments;
+ (id)license;

/* instance methods */
- (id)init;

@end

#endif /* BRZResources_h */
