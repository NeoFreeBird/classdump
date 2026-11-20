//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
