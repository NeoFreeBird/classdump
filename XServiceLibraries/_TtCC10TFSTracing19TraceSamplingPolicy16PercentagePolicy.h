//
#ifndef _TtCC10TFSTracing19TraceSamplingPolicy16PercentagePolicy_h
#define _TtCC10TFSTracing19TraceSamplingPolicy16PercentagePolicy_h
@import Foundation;

#include "TFSTraceSamplingPolicy.h"

@class _$sSi;

@interface TFSTracing.TraceSamplingPolicy.PercentagePolicy : TFSTraceSamplingPolicy { // (Swift)
    /* instance variables */
    Swift.Int percentage;
}

/* instance methods */
- (_Bool)canStartTrace;
- (id)enforcedByCaller;

@end

#endif /* _TtCC10TFSTracing19TraceSamplingPolicy16PercentagePolicy_h */
