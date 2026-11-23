//
#ifndef GADDisplayAdMeasurement_h
#define GADDisplayAdMeasurement_h
@import Foundation;

#include "GADInternalNativeAd.h"

@class NSObject, UIView;

@interface GADDisplayAdMeasurement : NSObject {
    /* instance variables */
    struct atomic_flag { _Atomic _Bool _Value; } _sessionStarted;
    GADInternalNativeAd *_internalNativeAd;
}

@property (weak, nonatomic) UIView *view;

/* instance methods */
- (id)initWithInternalNativeAd:(id)ad;
- (_Bool)startWithError:(id *)error;

@end

#endif /* GADDisplayAdMeasurement_h */
