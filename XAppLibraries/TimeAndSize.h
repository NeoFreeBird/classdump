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
