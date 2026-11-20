//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift43TabCustomizationSelectedItemsViewController_h
#define _TtC14T1TwitterSwift43TabCustomizationSelectedItemsViewController_h
@import Foundation;

#include "UICollectionViewDelegateFlowLayout-Protocol.h"
#include "UICollectionViewDragDelegate-Protocol.h"
#include "UICollectionViewDropDelegate-Protocol.h"

@class T1TwitterSwift.TabCustomizationViewModel, TFNViewController, _$s5UIKit34UICollectionViewDiffableDataSourceCMn T1TwitterSwift.Section T1TwitterSwift.TabCustomizationItem ?, _$sSS, _$sSa -> T1TwitterSwift.TabCustomizationItem, _$sSi, _$sSo16UICollectionViewCSg, _$sSo6UIViewCSg, _$syXlSg;

@interface T1TwitterSwift.TabCustomizationSelectedItemsViewController : TFNViewController <UICollectionViewDropDelegate, UICollectionViewDragDelegate, UICollectionViewDelegateFlowLayout> { // (Swift)
    /* instance variables */
    nominal type descriptor for UIKit.UICollectionViewDiffableDataSource T1TwitterSwift.Section T1TwitterSwift.TabCustomizationItem ? $__lazy_storage_$_dataSource;
    Swift.AnyObject? tabBarItemsObserver;
    Swift.Array -> T1TwitterSwift.TabCustomizationItem tabBarItems;
    Swift.String reorderEducationTooltipEvent;
    __C.UIView? $__lazy_storage_$_borderView;
    __C.UICollectionView? $__lazy_storage_$_collectionView;
    T1TwitterSwift.TabCustomizationViewModel viewModel;
    Swift.Int maximumSlotCount;
}

/* instance methods */
- (id)collectionView:(id)view dropSessionDidUpdate:(id)update withDestinationIndexPath:(id)path;
- (void)collectionView:(id)view performDropWithCoordinator:(id)coordinator;
- (id)collectionView:(id)view itemsForBeginningDragSession:(id)session atIndexPath:(id)path;
- (_Bool)collectionView:(id)view dragSessionIsRestrictedToDraggingApplication:(id)application;
- (id)collectionView:(id)view dragPreviewParametersForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (void)voiceoverSettingsDidChange;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)dealloc;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift43TabCustomizationSelectedItemsViewController_h */
