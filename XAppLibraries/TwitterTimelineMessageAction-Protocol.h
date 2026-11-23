//
#ifndef TwitterTimelineMessageAction_Protocol_h
#define TwitterTimelineMessageAction_Protocol_h
@import Foundation;

@class NSArray, NSURL;

@protocol TwitterTimelineMessageAction

@required

@property (nonatomic, readonly) _Bool isDismissAction;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSArray *callbackEndpoints;

@optional

@end

#endif /* TwitterTimelineMessageAction_Protocol_h */
