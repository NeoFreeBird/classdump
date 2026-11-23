//
#ifndef T1LiveEventTimelineController_h
#define T1LiveEventTimelineController_h
@import Foundation;

#include "T1LiveEventTimelineRefreshRecurringTask.h"
#include "T1URTLiveEventTimelineTweetInjectionListener.h"
#include "TUIUpdateIndicatorDelegate-Protocol.h"

@class NSObject, NSString, TFNDataViewController, TFSTwitterRecurringTaskTimerEventSource, TUIUpdateIndicator;

@interface T1LiveEventTimelineController : NSObject <TUIUpdateIndicatorDelegate>

@property (readonly, nonatomic) TFNDataViewController *viewController;
@property (readonly, nonatomic) T1LiveEventTimelineRefreshRecurringTask *refreshTask;
@property (readonly, nonatomic) TFSTwitterRecurringTaskTimerEventSource *refreshTaskTimerEventSource;
@property (readonly, nonatomic) T1URTLiveEventTimelineTweetInjectionListener *tweetInjectionListener;
@property (readonly, nonatomic) TUIUpdateIndicator *updateIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithViewController:(id)controller refreshTask:(id)task refreshTaskTimerEventSource:(id)source tweetInjectionListener:(id)listener updateIndicator:(id)indicator;
- (void)dealloc;
- (_Bool)canShowUpdateIndicator:(id)indicator withContentNotification:(id)notification;

@end

#endif /* T1LiveEventTimelineController_h */
