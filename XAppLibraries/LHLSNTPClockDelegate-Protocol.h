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
