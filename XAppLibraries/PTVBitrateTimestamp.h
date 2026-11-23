//
#ifndef PTVBitrateTimestamp_h
#define PTVBitrateTimestamp_h
@import Foundation;

@class NSDate, NSObject;

@interface PTVBitrateTimestamp : NSObject

@property (readonly, nonatomic) int bitrate;
@property (readonly, nonatomic) NSDate *startDate;

/* instance methods */
- (id)initWithBitrate:(int)bitrate startDate:(id)date;

@end

#endif /* PTVBitrateTimestamp_h */
