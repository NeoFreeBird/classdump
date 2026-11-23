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
