//
#ifndef _TtC7CallSFUP33_553EF8F5CC3523FAC1EC359B380009CF15RtcRequestTimer_h
#define _TtC7CallSFUP33_553EF8F5CC3523FAC1EC359B380009CF15RtcRequestTimer_h
@import Foundation;

#include "NSURLSessionTaskDelegate-Protocol.h"

@class NSObject;

@interface CallSFU.(RtcRequestTimer in _553EF8F5CC3523FAC1EC359B380009CF) : NSObject <NSURLSessionTaskDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 metrics;
    @40@0:8:16@24@32 queue;
    @40@0:8:16@24@32 firstByte;
}

/* instance methods */
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (id)init;

@end

#endif /* _TtC7CallSFUP33_553EF8F5CC3523FAC1EC359B380009CF15RtcRequestTimer_h */
