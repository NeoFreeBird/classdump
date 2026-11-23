//
#ifndef FIRSessionsDependencies_h
#define FIRSessionsDependencies_h
@import Foundation;

@class NSObject;

@interface FIRSessionsDependencies : NSObject // (Swift)

/* class methods */
+ (void)addDependencyWithName:(long long)name;

/* instance methods */
- (id)init;

@end

#endif /* FIRSessionsDependencies_h */
