//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRects_T1Additions_h
#define TFSTwitterRects_T1Additions_h
@import Foundation;

@interface TFSTwitterRects (T1Additions)

/* instance methods */
- (id)rectWithDesiredRatio:(double)ratio relativeToSize:(struct CGSize { double x0; double x1; })size cropThreshold:(double)threshold;

@end

#endif /* TFSTwitterRects_T1Additions_h */
