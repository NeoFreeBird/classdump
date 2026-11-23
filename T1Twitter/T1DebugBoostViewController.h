//
#ifndef T1DebugBoostViewController_h
#define T1DebugBoostViewController_h
@import Foundation;

@class TFNItemsDataViewController, TFNTwitterAccount;

@interface T1DebugBoostViewController : TFNItemsDataViewController // (Swift)

@property (nonatomic, readonly) TFNTwitterAccount *account;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1DebugBoostViewController_h */
