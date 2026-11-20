//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSWidgetRefreshHelper_h
#define TFSWidgetRefreshHelper_h
@import Foundation;

@class NSObject;

@interface TFSWidgetRefreshHelper : NSObject // (Swift)

/* class methods */
+ (void)refreshBadgeWidgets;
+ (void)refreshNotificationWidget;
+ (void)refreshMessagesWidget;
+ (void)refreshAllWidgets;
+ (void)getInstalledWidgetKinds:(id /* block */)kinds;

/* instance methods */
- (id)init;

@end

#endif /* TFSWidgetRefreshHelper_h */
