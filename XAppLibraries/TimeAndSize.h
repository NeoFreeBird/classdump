//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TimeAndSize_h
#define TimeAndSize_h
@import Foundation;

@class NSObject;

@interface TimeAndSize : NSObject

@property int size;
@property double time;

/* instance methods */
- (id)initwithSize:(int)size andTime:(double)time;

@end

#endif /* TimeAndSize_h */
