//
#ifndef PTVRTSPStat_h
#define PTVRTSPStat_h
@import Foundation;

@class NSObject, NSString;

@interface PTVRTSPStat : NSObject {
    /* instance variables */
    unsigned long long _size;
    int * _buffer;
    int _length;
    int _n;
    int _total;
    int _cap_NonZero;
    float _average;
    float _running_average;
    float _cap_total;
    NSString *_title;
}

/* instance methods */
- (void)dealloc;
- (id)initWithCapacity:(unsigned int)capacity title:(id)title;
- (void)add:(int)add;
- (id)description;
- (int)length;
- (int)size;
- (int)max;
- (float)average;
- (float)running_average;
- (float)fractionNonZero;

@end

#endif /* PTVRTSPStat_h */
