//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribeEventRangeInfo_h
#define TFSScribeEventRangeInfo_h
@import Foundation;

@class NSNumber, NSObject, NSString;

@interface TFSScribeEventRangeInfo : NSObject

@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSNumber *numberOfEvents;
@property (retain, nonatomic) NSNumber *firstSequenceId;
@property (retain, nonatomic) NSNumber *firstTimestamp;
@property (retain, nonatomic) NSNumber *lastSequenceId;
@property (retain, nonatomic) NSNumber *lastTimestamp;

/* instance methods */
- (id)initWithGroup:(id)group eventType:(id)type numberOfEvents:(id)events firstSequenceId:(id)id firstTimestamp:(id)timestamp lastSequenceId:(id)id lastTimestamp:(id)timestamp;

@end

#endif /* TFSScribeEventRangeInfo_h */
