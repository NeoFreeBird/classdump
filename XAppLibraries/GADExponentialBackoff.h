//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADExponentialBackoff_h
#define GADExponentialBackoff_h
@import Foundation;

@class NSObject;

@interface GADExponentialBackoff : NSObject {
    /* instance variables */
    double _initialInterval;
    double _multiplier;
    double _maxInterval;
    long long _numberOfRetries;
    long long _maxNumberOfRetries;
    double _currentInterval;
}

/* instance methods */
- (id)init;
- (void)reset;
- (double)delayInSeconds;
- (void)increaseInterval;
- (_Bool)shouldRetry;

@end

#endif /* GADExponentialBackoff_h */
