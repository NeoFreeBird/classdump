//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsVASTTrackingEvent_Protocol_h
#define TAVAnalyticsVASTTrackingEvent_Protocol_h
@import Foundation;

@class NSString;

@protocol TAVAnalyticsVASTTrackingEvent

@required

@property (readonly, copy, nonatomic) NSString *VASTTrackingMetric;

@optional

@end

#endif /* TAVAnalyticsVASTTrackingEvent_Protocol_h */
