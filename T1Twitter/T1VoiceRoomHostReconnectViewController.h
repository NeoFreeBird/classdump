//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomHostReconnectViewController_h
#define T1VoiceRoomHostReconnectViewController_h
@import Foundation;

#include "TASSpaceModelObserver-Protocol.h"
#include "TUICardViewDelegate-Protocol.h"

@class TFNViewController;

@interface T1VoiceRoomHostReconnectViewController : TFNViewController <TUICardViewDelegate, TASSpaceModelObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *spaceModel;
    NSNumber"16@0:8 *delegate;
    NSNumber"16@0:8 *expectedTimeout;
    NSNumber"16@0:8 *timeoutTimer;
    NSNumber"16@0:8 *$__lazy_storage_$_headerImageView;
    NSNumber"16@0:8 *$__lazy_storage_$_headerLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_subheaderLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_headerStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_spaceCard;
    NSNumber"16@0:8 *$__lazy_storage_$_attendanceCountLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_cardContainerStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_timeRemainingLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_reconnectButton;
    NSNumber"16@0:8 *$__lazy_storage_$_endButton;
    NSNumber"16@0:8 *$__lazy_storage_$_footerStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_parentStackView;
}

/* instance methods */
- (id)layoutMetricsForCardView:(id)view;
- (id)cardView:(id)view didFireViewEvent:(id)event;
- (void)spaceModel:(id)model didUpdateUsersModels:(id)models;
- (void)spaceModelDidChangeConnectionState:(id)state fromState:(long long)state;
- (void)spaceModelDidUpdateProperties:(id)properties;
- (id)initWithSpaceModel:(id)model delegate:(id)delegate;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didTapReconnect;
- (void)didTapEndSpace;
- (id)scribe;
- (id)scribePage;
- (id)scribeComponent;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1VoiceRoomHostReconnectViewController_h */
