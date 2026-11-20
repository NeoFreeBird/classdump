//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
