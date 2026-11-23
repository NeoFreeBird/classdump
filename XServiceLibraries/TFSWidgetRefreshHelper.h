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
