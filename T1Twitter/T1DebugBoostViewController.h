//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
