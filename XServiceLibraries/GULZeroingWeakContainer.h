//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GULZeroingWeakContainer_h
#define GULZeroingWeakContainer_h
@import Foundation;

@class NSObject;

@interface GULZeroingWeakContainer : NSObject

@property (weak, nonatomic) id object;

/* instance methods */

@end

#endif /* GULZeroingWeakContainer_h */
