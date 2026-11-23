//
#ifndef THMHomeTimelineItemsViewControllerProtocol_Protocol_h
#define THMHomeTimelineItemsViewControllerProtocol_Protocol_h
@import Foundation;

#include "GrokImagineTimelineImagePeek.h"
#include "NSObject-Protocol.h"
#include "TFNTwitterHomeTimeline.h"

@class TFNTwitterAccount, TUIUpdateIndicator, UIView;

@protocol THMHomeTimelineItemsViewControllerProtocol <NSObject>

@required

@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, readonly) TFNTwitterHomeTimeline *timeline;
@property (nonatomic, retain) TUIUpdateIndicator *updateIndicator;
@property (nonatomic) _Bool contentFocus;
@property (nonatomic, readonly) UIView *fleetLineAccessoryView;
@property (nonatomic) _Bool shouldShowShimmerWhenEmptyAndFetching;
@property (nonatomic, readonly) _Bool isRestoringPersistedScrollPosition;
@property (nonatomic, retain) GrokImagineTimelineImagePeek *grokImagineTimelineImagePeek;

@optional

@end

#endif /* THMHomeTimelineItemsViewControllerProtocol_Protocol_h */
