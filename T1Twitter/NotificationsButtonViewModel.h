//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NotificationsButtonViewModel_h
#define NotificationsButtonViewModel_h
@import Foundation;

@class NSObject;

@interface NotificationsButtonViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *isAvailable;
    NSNumber"16@0:8 *onNeedsReload;
    NSNumber"16@0:8 *location;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *sourceStatus;
    NSNumber"16@0:8 *notificationSettingsProperty;
    NSNumber"16@0:8 *tweetNotificationsRelationshipState;
    NSNumber"16@0:8 *button;
    NSNumber"16@0:8 *$__lazy_storage_$_sheetPresenter;
}

/* instance methods */
- (id)initWithLocation:(long long)location account:(id)account profileViewModel:(id)model sourceStatus:(id)status;
- (void)didTap:(id)tap;
- (id)init;

@end

#endif /* NotificationsButtonViewModel_h */
