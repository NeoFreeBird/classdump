//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVStdDevStats_h
#define PTVStdDevStats_h
@import Foundation;

@class NSObject;

@interface PTVStdDevStats : NSObject {
    /* instance variables */
    int _count;
    double _sum;
    double _sumSquares;
    double _latest;
}

@property double min;
@property double max;

/* instance methods */
- (id)init;
- (void)reset;
- (void)note:(double)note;
- (double)latest;
- (double)mean;
- (double)deviation;
- (id)description;
- (id)getStatistics;
- (id)getStatisticsWithTag:(id)tag;

@end

#endif /* PTVStdDevStats_h */
