//
#ifndef TASScheduledSpaceData_h
#define TASScheduledSpaceData_h
@import Foundation;

@class NSDate, NSObject, NSString;

@interface TASScheduledSpaceData : NSObject // (Swift)

@property (nonatomic, readonly) NSString *spaceID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDate *scheduledStart;
@property (nonatomic, readonly) NSString *communityID;
@property (nonatomic, readonly) _Bool availableForReplay;
@property (nonatomic, readonly) _Bool isNearScheduledTime;

/* instance methods */
- (id)initWithSpaceID:(id)id title:(id)title scheduledStart:(id)start communityID:(id)id availableForReplay:(_Bool)replay;
- (id)init;

@end

#endif /* TASScheduledSpaceData_h */
