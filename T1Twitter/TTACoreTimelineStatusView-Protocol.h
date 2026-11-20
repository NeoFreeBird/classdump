//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTACoreTimelineStatusView_Protocol_h
#define TTACoreTimelineStatusView_Protocol_h
@import Foundation;

#include "TFNReusableViewCacheContainer-Protocol.h"
#include "TTACoreBasicStatusView-Protocol.h"
#include "TUICardViewDelegate-Protocol.h"

@protocol TTACoreTimelineStatusView <TTACoreBasicStatusView, TFNReusableViewCacheContainer>

@required

@property (nonatomic) unsigned long long conversationConnectorType;
@property (nonatomic, readonly) id <TUICardViewDelegate> cardViewDelegate;
@property (nonatomic, readonly) _Bool hasURL;

/* required instance methods */
- (void)openURL;

@optional

@end

#endif /* TTACoreTimelineStatusView_Protocol_h */
