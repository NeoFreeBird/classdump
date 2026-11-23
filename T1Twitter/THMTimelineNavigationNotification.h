//
#ifndef THMTimelineNavigationNotification_h
#define THMTimelineNavigationNotification_h
@import Foundation;

@class NSObject;

@interface THMTimelineNavigationNotification : NSObject // (Swift)

@property (nonatomic, readonly) long long kind;

/* instance methods */
- (id)initWithKind:(long long)kind;
- (id)init;

@end

#endif /* THMTimelineNavigationNotification_h */
