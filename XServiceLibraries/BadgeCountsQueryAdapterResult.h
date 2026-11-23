//
#ifndef BadgeCountsQueryAdapterResult_h
#define BadgeCountsQueryAdapterResult_h
@import Foundation;

@class NSNumber, NSObject;

@interface BadgeCountsQueryAdapterResult : NSObject // (Swift)

@property (nonatomic, readonly) NSNumber *ntabUnreadCount;
@property (nonatomic, readonly) NSNumber *dmUnreadCount;
@property (nonatomic, readonly) NSNumber *xchatUnreadCount;
@property (nonatomic, readonly) NSNumber *grokBotUnreadCount;
@property (nonatomic, readonly) NSNumber *totalUnreadCount;

/* instance methods */
- (id)initWithNtabUnreadCount:(id)count dmUnreadCount:(id)count xchatUnreadCount:(id)count grokBotUnreadCount:(id)count totalUnreadCount:(id)count;
- (id)init;

@end

#endif /* BadgeCountsQueryAdapterResult_h */
