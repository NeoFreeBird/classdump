//
#ifndef T1WebViewCacheSettingsViewController_h
#define T1WebViewCacheSettingsViewController_h
@import Foundation;

@class NSString, TFNItemsDataViewController, TFNTwitterAccount;

@interface T1WebViewCacheSettingsViewController : TFNItemsDataViewController

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (copy, nonatomic) NSString *webViewCacheUsedString;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (void)loadWebViewCacheSize:(id /* block */)size;
- (void)viewWillAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (id)_detailedInfoItem;
- (id)_clearCacheItem:(_Bool)item;
- (id)_clearCacheDetailsItem:(_Bool)item;
- (void)_presentClearAlert:(_Bool)alert;

@end

#endif /* T1WebViewCacheSettingsViewController_h */
