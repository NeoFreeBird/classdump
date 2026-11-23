//
#ifndef T1ProfileBonusFollowViewController_h
#define T1ProfileBonusFollowViewController_h
@import Foundation;

#include "OCFNavigationLinkHandler-Protocol.h"
#include "T1ProfileViewModel-Protocol.h"
#include "T1ResizableHeaderSubheader-Protocol.h"
#include "T1UserFacepileViewProvider-Protocol.h"
#include "T1UserFacepileWithActionViewModelDelegate-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount, TFNViewController, TFSTwitterScribeContext, UIView;

@interface T1ProfileBonusFollowViewController : TFNViewController <T1UserFacepileWithActionViewModelDelegate, OCFNavigationLinkHandler, T1ResizableHeaderSubheader> {
    /* instance variables */
    id <T1ProfileViewModel> _profileViewModel;
    UIView *_facepileView;
    TFNTwitterAccount *_account;
    NSObject<T1UserFacepileViewProvider> *_viewProvider;
    TFSTwitterScribeContext *_scribeContext;
}

@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id subheaderInfo;
@property (copy, nonatomic) id /* block */ preferredHeightCheckBlock;

/* instance methods */
- (id)initWithAccount:(id)account profileViewModel:(id)model;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (id /* block */)private_dismissBlock;
- (id)private_headerItem;
- (id)private_promptItem;
- (id)private_dividerItem;
- (id)private_users;
- (id)private_featuredUsers;
- (void)private_presentAfterDismissingPresentedViewController:(id)controller;
- (id)scribePage;
- (double)preferredHeight;
- (void)didActivateNavigationLink:(id)link;
- (void)userFacepileViewModel:(id)model didRequestModalPresentationOfViewController:(id)controller;
- (void)userFacepileViewModel:(id)model didRequestPushOfViewController:(id)controller;
- (void)userFacepileViewModelDidDismissAllUsers:(id)users;

@end

#endif /* T1ProfileBonusFollowViewController_h */
