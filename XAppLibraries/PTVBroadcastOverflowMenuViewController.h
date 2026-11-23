//
#ifndef PTVBroadcastOverflowMenuViewController_h
#define PTVBroadcastOverflowMenuViewController_h
@import Foundation;

#include "PTVBroadcastController.h"
#include "PTVBroadcastOverflowMenuViewControllerDelegate-Protocol.h"
#include "PTVBroadcastOverflowMenuViewDelegate-Protocol.h"
#include "PTVCustomTwitterViewDelegate-Protocol.h"

@class NSArray, NSString, UIView, UIViewController;

@interface PTVBroadcastOverflowMenuViewController : UIViewController <PTVBroadcastOverflowMenuViewDelegate> {
    /* instance variables */
    PTVBroadcastController *_broadcastController;
    NSArray *_menuItemsToShow;
    id <PTVBroadcastOverflowMenuViewControllerDelegate> _delegate;
    long long _participantCount;
    id <PTVCustomTwitterViewDelegate> _customTwitterViewDelegate;
    _Bool _hasClickableHashTags;
}

@property (retain, nonatomic) UIView *profileBanner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)overflowMenuWithBroadcastController:(id)controller menuItemsToShow:(id)show delegate:(id)delegate twitterViewDelegate:(id)delegate hasClickableHashTags:(_Bool)tags;

/* instance methods */
- (void)loadView;
- (void)viewDidLoad;
- (void)broadcastOverflowMenuViewDidTapEmptySpace:(id)space;
- (void)broadcastOverflowMenuTitleViewDidTapHashtag:(id)hashtag;
- (id)initWithBroadcastController:(id)controller menuItemsToShow:(id)show hasClickableHashTags:(_Bool)tags delegate:(id)delegate customTwitterViewDelegate:(id)delegate;
- (id)menuView;
- (void)updateParticipantCount:(long long)count;
- (void)constructButtons;
- (void)menuItemPressed:(id)pressed;

@end

#endif /* PTVBroadcastOverflowMenuViewController_h */
