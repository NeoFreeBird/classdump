//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
