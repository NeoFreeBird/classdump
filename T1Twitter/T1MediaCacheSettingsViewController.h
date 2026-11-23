//
#ifndef T1MediaCacheSettingsViewController_h
#define T1MediaCacheSettingsViewController_h
@import Foundation;

@class NSString, TFNItemsDataViewController, TFNTwitterAccount;

@interface T1MediaCacheSettingsViewController : TFNItemsDataViewController

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (copy, nonatomic) NSString *mediaCacheUsedString;
@property (copy, nonatomic) NSString *mediaCacheSizeString;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (void)loadMediaCacheSize:(id /* block */)size;
- (void)viewWillAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (id)_detailedInfoItem;
- (id)_clearCacheItem;
- (id)_clearCacheDetailsItem;
- (void)_presentClearAlert;

@end

#endif /* T1MediaCacheSettingsViewController_h */
