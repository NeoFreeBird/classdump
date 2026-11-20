//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PostInteractionSettingsViewController_h
#define T1PostInteractionSettingsViewController_h
@import Foundation;

#include "T1SettingsSearchableFeatureProvider-Protocol.h"

@class NSArray, TFNItemsDataViewController;

@interface T1PostInteractionSettingsViewController : TFNItemsDataViewController <T1SettingsSearchableFeatureProvider> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *accountUserDefaults;
    NSNumber"16@0:8 *preferencePickerAdapter;
    NSNumber"16@0:8 *$__lazy_storage_$_displayInlineActionsItem;
    NSNumber"16@0:8 *$__lazy_storage_$_enablePostSwipeGesturesItem;
    NSNumber"16@0:8 *$__lazy_storage_$_rightSwipePreferenceItem;
    NSNumber"16@0:8 *$__lazy_storage_$_leftSwipePreferenceItem;
    NSNumber"16@0:8 *$__lazy_storage_$_rightSwipeDisplayItem;
    NSNumber"16@0:8 *$__lazy_storage_$_leftSwipeDisplayItem;
}

@property (nonatomic, readonly) NSArray *searchableFeatures;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1PostInteractionSettingsViewController_h */
