//
#ifndef TTALegacyPromotedLoggablePerspective_Protocol_h
#define TTALegacyPromotedLoggablePerspective_Protocol_h
@import Foundation;

#include "TFCCardDataSource-Protocol.h"
#include "TTALegacyPromotedStatusLoggable-Protocol.h"
#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@protocol TTALegacyPromotedLoggablePerspective <TAPTweet.TAPTweetPerspective, TTALegacyPromotedStatusLoggable>

@required

@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (retain, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (readonly, nonatomic) id <TTALegacyPromotedLoggablePerspective> representedStatus;

@optional

@end

#endif /* TTALegacyPromotedLoggablePerspective_Protocol_h */
