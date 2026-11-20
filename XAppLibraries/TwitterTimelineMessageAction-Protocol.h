//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
