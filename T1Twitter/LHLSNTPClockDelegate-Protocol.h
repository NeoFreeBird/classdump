//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSNTPClockDelegate_Protocol_h
#define LHLSNTPClockDelegate_Protocol_h
@import Foundation;

@protocol LHLSNTPClockDelegate

@required

/* required instance methods */
- (id)date;
- (id)socketWithListener:(id)listener;
- (void)scheduleAfter:(double)after block:(id /* block */)block;

@optional

@end

#endif /* LHLSNTPClockDelegate_Protocol_h */
