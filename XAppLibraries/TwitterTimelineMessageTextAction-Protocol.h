//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TwitterTimelineMessageTextAction_Protocol_h
#define TwitterTimelineMessageTextAction_Protocol_h
@import Foundation;

#include "TwitterTimelineMessageAction-Protocol.h"

@class NSString;

@protocol TwitterTimelineMessageTextAction

@required

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) id <TwitterTimelineMessageAction> action;

@optional

@end

#endif /* TwitterTimelineMessageTextAction_Protocol_h */
