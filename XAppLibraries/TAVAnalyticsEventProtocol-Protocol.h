//
#ifndef TAVAnalyticsEventProtocol_Protocol_h
#define TAVAnalyticsEventProtocol_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"
#include "TAVAnalyticsSessionState.h"

@class NSUUID;

@protocol TAVAnalyticsEventProtocol <NSCopying, NSObject>

@required

@property (readonly, copy, nonatomic) NSUUID *playlistItemKey;
@property (readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState;

@optional

@end

#endif /* TAVAnalyticsEventProtocol_Protocol_h */
