//
#ifndef _TtCC10TFSTracing19TraceSamplingPolicy26FractionalPercentagePolicy_h
#define _TtCC10TFSTracing19TraceSamplingPolicy26FractionalPercentagePolicy_h
@import Foundation;

#include "TFSTraceSamplingPolicy.h"

@class _$sSi;

@interface TFSTracing.TraceSamplingPolicy.FractionalPercentagePolicy : TFSTraceSamplingPolicy { // (Swift)
    /* instance variables */
    Swift.Int fractionalPercentage;
}

/* instance methods */
- (_Bool)canStartTrace;
- (id)enforcedByCaller;

@end

#endif /* _TtCC10TFSTracing19TraceSamplingPolicy26FractionalPercentagePolicy_h */
