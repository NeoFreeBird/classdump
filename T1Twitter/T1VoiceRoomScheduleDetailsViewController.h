//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomScheduleDetailsViewController_h
#define T1VoiceRoomScheduleDetailsViewController_h
@import Foundation;

#include "EKEventEditViewDelegate-Protocol.h"
#include "TASSpaceModelObserver-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"
#include "TUICardViewDelegate-Protocol.h"

@class TFNViewController;

@interface T1VoiceRoomScheduleDetailsViewController : TFNViewController <EKEventEditViewDelegate, TUICardViewDelegate, TFNModalSheetViewControllerLayoutDelegate, TASSpaceModelObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *hasAddedActions;
    NSNumber"16@0:8 *$__lazy_storage_$_shouldShowStartNowButton;
    NSNumber"16@0:8 *$__lazy_storage_$_eventStore;
    NSNumber"16@0:8 *$__lazy_storage_$_cardEventHandler;
    NSNumber"16@0:8 *$__lazy_storage_$_googleCalendarURL;
    NSNumber"16@0:8 *$__lazy_storage_$_hasValidGoogleCalendarURL;
    NSNumber"16@0:8 *$__lazy_storage_$_closeBarButtonItem;
    NSNumber"16@0:8 *cardTopConstraint;
    NSNumber"16@0:8 *$__lazy_storage_$_spaceCard;
    NSNumber"16@0:8 *actionsTopConstraint;
    NSNumber"16@0:8 *$__lazy_storage_$_startNowButton;
    NSNumber"16@0:8 *$__lazy_storage_$_shareButton;
    NSNumber"16@0:8 *$__lazy_storage_$_editButton;
    NSNumber"16@0:8 *$__lazy_storage_$_reminderButton;
    NSNumber"16@0:8 *$__lazy_storage_$_calendarButton;
}

/* instance methods */
- (void)eventEditViewController:(id)controller didCompleteWithAction:(long long)action;
- (id)layoutMetricsForCardView:(id)view;
- (id)cardView:(id)view didFireViewEvent:(id)event;
- (void)cardView:(id)view didUpdateContentAnimated:(_Bool)animated;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)spaceModel:(id)model didUpdateLoggedInUserModel:(id)model;
- (void)spaceModel:(id)model didChangeSubscriptionState:(_Bool)state;
- (id)initWithViewModel:(id)model;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillLayoutSubviews;
- (void)didTapClose;
- (void)didTapStartNow;
- (void)didTapEdit;
- (void)didTapAddToCalendar;
- (void)didTapGoogleCalendarItem;
- (void)didTapAppleCalendarItem;
- (void)didTapShare;
- (void)didTapRemindWithSender:(id)sender;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)scribeParameters;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1VoiceRoomScheduleDetailsViewController_h */
