//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIUpdateIndicatorDelegate_Protocol_h
#define TUIUpdateIndicatorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUIUpdateIndicatorDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)canShowUpdateIndicator:(id)indicator withContentNotification:(id)notification;
- (_Bool)canShowUpdateIndicator:(id)indicator withContentNotification:(id)notification;

@optional

/* optional instance methods */
- (_Bool)dataViewControllerShouldScrollToTop:(id)top forUpdateIndicator:(id)indicator;
- (_Bool)dataViewControllerShouldScrollToTop:(id)top forUpdateIndicator:(id)indicator;
- (_Bool)dataViewController:(id)controller canNavigateToEntryID:(id)id forUpdateIndicator:(id)indicator;
- (_Bool)dataViewController:(id)controller canNavigateToEntryID:(id)id forUpdateIndicator:(id)indicator;
- (void)navigateToEntryID:(id)id forUpdateIndicator:(id)indicator;
- (void)navigateToEntryID:(id)id forUpdateIndicator:(id)indicator;
- (_Bool)isEntryIDVisibleInViewport:(id)viewport forUpdateIndicator:(id)indicator;
- (_Bool)isEntryIDVisibleInViewport:(id)viewport forUpdateIndicator:(id)indicator;

@end

#endif /* TUIUpdateIndicatorDelegate_Protocol_h */
