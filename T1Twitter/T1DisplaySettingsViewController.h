//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1DisplaySettingsViewController_h
#define T1DisplaySettingsViewController_h
@import Foundation;

#include "T1StatusTableRowAdapter.h"

@class TFNBooleanItem, TFNItemsDataViewController, TFNTwitterAccount, TFNTwitterStatus;

@interface T1DisplaySettingsViewController : TFNItemsDataViewController

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) T1StatusTableRowAdapter *statusAdapter;
@property (retain, nonatomic) TFNBooleanItem *darkModeItem;
@property (retain, nonatomic) TFNBooleanItem *lighterItem;
@property (retain, nonatomic) TFNBooleanItem *darkerItem;
@property (retain, nonatomic) TFNTwitterStatus *sampleStatus;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (void)viewWillAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (void)_t1_addStatusAndTextSizeSliderSectionsToArray:(id)array;
- (void)loadExampleStatusForAccountModel:(id)model completion:(id /* block */)completion;
- (void)_t1_addBackgroundItemsToArray:(id)array;
- (void)_t1_addColorItemsToArray:(id)array;
- (void)_t1_userDefaultsDidChange;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;

@end

#endif /* T1DisplaySettingsViewController_h */
