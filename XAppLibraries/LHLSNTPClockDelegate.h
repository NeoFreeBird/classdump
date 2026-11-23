//
#ifndef LHLSNTPClockDelegate_h
#define LHLSNTPClockDelegate_h
@import Foundation;

#include "LHLSNTPClockDelegate-Protocol.h"

@class NSObject;

@interface LHLSNTPClockDelegate : NSObject <LHLSNTPClockDelegate>

/* instance methods */
- (id)date;
- (id)socketWithListener:(id)listener;
- (void)scheduleAfter:(double)after block:(id /* block */)block;

@end

#endif /* LHLSNTPClockDelegate_h */
