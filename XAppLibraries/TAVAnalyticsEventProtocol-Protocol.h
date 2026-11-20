//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
