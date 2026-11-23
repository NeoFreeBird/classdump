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
