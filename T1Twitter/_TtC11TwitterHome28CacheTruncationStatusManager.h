//
#ifndef _TtC11TwitterHome28CacheTruncationStatusManager_h
#define _TtC11TwitterHome28CacheTruncationStatusManager_h
@import Foundation;

@class NSObject, TwitterHome.CacheTruncationStatusManager.CacheTruncationStatus;

@interface TwitterHome.CacheTruncationStatusManager : NSObject // (Swift)

@property (nonatomic) long long status;
@property (nonatomic, readonly) _Bool isCachePending;

/* instance methods */
- (id)init;

@end

#endif /* _TtC11TwitterHome28CacheTruncationStatusManager_h */
