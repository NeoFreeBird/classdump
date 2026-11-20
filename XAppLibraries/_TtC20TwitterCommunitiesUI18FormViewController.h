//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI18FormViewController_h
#define _TtC20TwitterCommunitiesUI18FormViewController_h
@import Foundation;

#include "TFNFormFieldDataItemAdapterDelegate-Protocol.h"

@class TFNItemsDataViewController, TwitterCommunitiesUI.Form, _$sSo15UIBarButtonItemCSg, _$sSo27TFNFormFieldDataItemAdapterC, _$syXlSg;

@interface TwitterCommunitiesUI.FormViewController : TFNItemsDataViewController <TFNFormFieldDataItemAdapterDelegate> { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.Form form;
    Swift.AnyObject? formObserver;
    __C.TFNFormFieldDataItemAdapter formFieldAdapter;
    __C.UIBarButtonItem? cancelBarButtonItem;
    __C.UIBarButtonItem? submitBarButtonItem;
}

/* instance methods */
- (void)formFieldAdapter:(id)adapter didSelectNextForItem:(id)item;
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (void)didSelectCancel;
- (void)didSelectSubmit;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC20TwitterCommunitiesUI18FormViewController_h */
