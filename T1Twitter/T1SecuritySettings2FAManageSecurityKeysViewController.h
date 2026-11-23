//
#ifndef T1SecuritySettings2FAManageSecurityKeysViewController_h
#define T1SecuritySettings2FAManageSecurityKeysViewController_h
@import Foundation;

@class TFNHUD, TFNItemsDataViewController, TFNTwitterAccount;

@interface T1SecuritySettings2FAManageSecurityKeysViewController : TFNItemsDataViewController {
    /* instance variables */
    TFNHUD *_hud;
}

@property (readonly, nonatomic) TFNTwitterAccount *account;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)_t1_buildSections;
- (void)_t1_tappedCell:(id)cell withMethod:(id)method;
- (void)startRenameKeyFlowForMethodID:(long long)id;
- (void)startDeleteKeyFlowForMethodID:(long long)id;
- (void)_t1_refresh;
- (void)viewDidAppear:(_Bool)appear;

@end

#endif /* T1SecuritySettings2FAManageSecurityKeysViewController_h */
