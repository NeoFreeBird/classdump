//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNFlexibleSpaceHelper_h
#define TFNFlexibleSpaceHelper_h
@import Foundation;

@class NSObject;

@interface TFNFlexibleSpaceHelper : NSObject

/* instance methods */
- (double)lengthForFlexibleSpaceAtIndexPath:(id)path availableSpace:(double)space absoluteMinimumLength:(double)length itemEnumerator:(id /* block */)enumerator;

@end

#endif /* TFNFlexibleSpaceHelper_h */
