//
#ifndef THMURTHomeTimelineStreamProtocol_Protocol_h
#define THMURTHomeTimelineStreamProtocol_Protocol_h
@import Foundation;

#include "TFNTwitterHomeTimelineStream-Protocol.h"
#include "TwitterHomeFeaturesConfigurationProtocol-Protocol.h"

@class TFNTwitterAccount;

@protocol THMURTHomeTimelineStreamProtocol <TFNTwitterHomeTimelineStream>

@required

@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, readonly) id <TwitterHomeFeaturesConfigurationProtocol> timelineSettings;

/* required instance methods */
- (void)truncateAfterFirstBottomCursorWithMinimumContentCountThreshold:(long long)threshold completion:(id /* block */)completion;

@optional

@end

#endif /* THMURTHomeTimelineStreamProtocol_Protocol_h */
