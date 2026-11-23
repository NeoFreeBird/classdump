//
#ifndef PTVGuestRoomReportType_h
#define PTVGuestRoomReportType_h
@import Foundation;

@class NSObject, NSString;

@interface PTVGuestRoomReportType : NSObject

@property (readonly, nonatomic) long long broadcastReportType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *scribeElement;

/* instance methods */
- (id)initWithBroadcastReportType:(long long)type;
- (id)description;
- (_Bool)isEqual:(id)equal;

@end

#endif /* PTVGuestRoomReportType_h */
