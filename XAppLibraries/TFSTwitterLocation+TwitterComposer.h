//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLocation_TwitterComposer_h
#define TFSTwitterLocation_TwitterComposer_h
@import Foundation;

@interface TFSTwitterLocation (TwitterComposer)

/* instance methods */
- (id)coordinateTextWithPrecision:(unsigned long long)precision;

@end

#endif /* TFSTwitterLocation_TwitterComposer_h */
