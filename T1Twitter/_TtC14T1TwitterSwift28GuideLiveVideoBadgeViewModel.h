//
#ifndef _TtC14T1TwitterSwift28GuideLiveVideoBadgeViewModel_h
#define _TtC14T1TwitterSwift28GuideLiveVideoBadgeViewModel_h
@import Foundation;

#include "T1LiveVideoBadgeViewModel-Protocol.h"

@class NSObject, NSString, Swift.Bool, _$sSSSg;

@interface T1TwitterSwift.GuideLiveVideoBadgeViewModel : NSObject <T1LiveVideoBadgeViewModel> // (Swift)

@property (nonatomic, readonly) NSString *badgeText;
@property (nonatomic, readonly) _Bool isEventCurrentlyLive;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift28GuideLiveVideoBadgeViewModel_h */
