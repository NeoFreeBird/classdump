//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1NotificationsAnniversaryViewController_h
#define T1NotificationsAnniversaryViewController_h
@import Foundation;

#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class NSString, NSURL, TFNButton, TFNHUD, TFNItemsDataViewController, TFNTwitterAccount, UIActivityIndicatorView, UIImageView;

@interface T1NotificationsAnniversaryViewController : TFNItemsDataViewController <TUIImageViewFetchHelperDelegate> {
    /* instance variables */
    TFNButton *_actionButton;
    UIImageView *_imageView;
    UIActivityIndicatorView *_activityIndicator;
    TFNHUD *_hud;
}

@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageDimensions;
@property (readonly, copy, nonatomic) NSString *actionText;
@property (readonly, copy, nonatomic) NSString *tweetText;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } tweetCursor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account message:(id)message imageURL:(id)url imageDimensions:(struct CGSize { double x0; double x1; })dimensions actionText:(id)text tweetText:(id)text tweetCursor:(struct _NSRange { unsigned long long x0; unsigned long long x1; })cursor;
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_actionButtonTapped:(id)tapped;
- (void)_showComposition;
- (void)update:(_Bool)update;
- (void)tui_fetchHelper:(id)helper readyToConfigureView:(id)view state:(long long)state;

@end

#endif /* T1NotificationsAnniversaryViewController_h */
