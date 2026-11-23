//
#ifndef RollingAverage_h
#define RollingAverage_h
@import Foundation;

@class NSMutableArray, NSObject;

@interface RollingAverage : NSObject {
    /* instance variables */
    NSMutableArray *_entries;
    double _duration;
    long long _total;
    double _averageOver;
    _Bool _full;
}

/* instance methods */
- (id)initForDuration:(double)duration;
- (void)addSize:(int)size andTime:(double)time;
- (int)bytesPerSecond;
- (_Bool)full;
- (int)averageSize;
- (double)averageDuration;
- (double)latest;

@end

#endif /* RollingAverage_h */
