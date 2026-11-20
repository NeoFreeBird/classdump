//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTableView_h
#define TFNTableView_h
@import Foundation;

#include "TFNDataView-Protocol.h"
#include "TFNDataViewController.h"
#include "TFNDataViewHelper.h"
#include "TFNDataViewHelperDelegate-Protocol.h"
#include "TFNReusableViewCache.h"

@class NSArray, NSIndexPath, NSString, UITableView;

@interface TFNTableView : UITableView <TFNDataViewHelperDelegate, TFNDataView> {
    /* instance variables */
    TFNDataViewController *_controller;
    TFNDataViewHelper *_helper;
    _Bool _reloadCellLayouts;
    _Bool _needsManualHeaderViewsLayout;
    _Bool _shouldManuallyLayoutHeaderViews;
    _Bool _usePlaceholderContentAdjustments;
}

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } headerViewInsets;
@property (nonatomic) struct UIOffset { double x0; double x1; } headerViewOffset;
@property (nonatomic) _Bool disableScrollIfContentFitsEnabled;
@property (nonatomic) _Bool hasSnappedHeaderViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) _Bool allowsSelection;
@property (nonatomic) _Bool allowsMultipleSelection;
@property (readonly, nonatomic) TFNReusableViewCache *reusableViewCache;
@property (readonly, nonatomic) NSIndexPath *tfn_firstIndexPath;
@property (readonly, nonatomic) NSIndexPath *tfn_lastIndexPath;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } tfn_visibleContentInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } tfn_visibleCellsInset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } tfn_visibleContentRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } tfn_visibleCellsRect;
@property (readonly, nonatomic) NSArray *tfn_visibleCells;
@property (readonly, nonatomic) NSArray *tfn_indexPathsForVisibleCells;

/* instance methods */
- (id)initWithDataViewController:(id)controller;
- (void)_updateShouldManuallyLayoutHeaderViews;
- (void)setSeparatorStyle:(long long)style;
- (void)beginUpdates;
- (void)endUpdates;
- (void)reloadData;
- (void)reloadRowsAtIndexPaths:(id)paths withRowAnimation:(long long)animation;
- (void)reloadSections:(id)sections withRowAnimation:(long long)animation;
- (void)insertRowsAtIndexPaths:(id)paths withRowAnimation:(long long)animation;
- (void)moveRowAtIndexPath:(id)path toIndexPath:(id)path;
- (void)didMoveRowAtIndexPath:(id)path toIndexPath:(id)path;
- (void)deleteRowsAtIndexPaths:(id)paths withRowAnimation:(long long)animation;
- (void)insertSections:(id)sections withRowAnimation:(long long)animation;
- (void)moveSection:(long long)section toSection:(long long)section;
- (void)deleteSections:(id)sections withRowAnimation:(long long)animation;
- (Class)registeredClassForCellReuseIdentifier:(id)identifier;
- (Class)registeredClassForHeaderFooterViewReuseIdentifier:(id)identifier;
- (void)registerClass:(Class)_class forCellReuseIdentifier:(id)identifier;
- (void)registerClass:(Class)_class forHeaderFooterViewReuseIdentifier:(id)identifier;
- (void)scrollToRowAtIndexPath:(id)path atScrollPosition:(long long)position animated:(_Bool)animated;
- (long long)_tableViewScrollPositionFromCollectionViewScrollPosition:(unsigned long long)position;
- (_Bool)touchesShouldCancelInContentView:(id)view;
- (id)accessibilityIdentifier;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (void)layoutSubviews;
- (void)_layoutHeaderViews;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (long long)numberOfItemsInSection:(long long)section;
- (void)reloadData:(_Bool)data;
- (void)reloadItemsAtIndexPaths:(id)paths;
- (void)reloadSections:(id)sections;
- (void)insertItemsAtIndexPaths:(id)paths;
- (void)moveItemAtIndexPath:(id)path toIndexPath:(id)path;
- (void)deleteItemsAtIndexPaths:(id)paths;
- (void)insertSections:(id)sections;
- (void)deleteSections:(id)sections;
- (void)performBatchUpdates:(id /* block */)updates completion:(id /* block */)completion;
- (void)selectItemAtIndexPath:(id)path animated:(_Bool)animated scrollPosition:(unsigned long long)position;
- (void)deselectItemAtIndexPath:(id)path animated:(_Bool)animated;
- (id)indexPathsForSelectedItems;
- (id)indexPathForRowAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)cellForItemAtIndexPath:(id)path;
- (id)indexPathsForVisibleItems;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndexPath:(id)path;
- (void)scrollToItemAtIndexPath:(id)path atScrollPosition:(unsigned long long)position animated:(_Bool)animated;
- (id)cellLayoutForIndexPath:(id)path;
- (void)setCellLayout:(id)layout forIndexPath:(id)path;
- (id)cellLayoutForObjectIdentifier:(id)identifier;
- (void)setCellLayout:(id)layout forObjectIdentifier:(id)identifier;
- (long long)invalidateCellLayoutsPassingTest:(id /* block */)test;
- (void)beginDataViewUpdatesForHelper:(id)helper;
- (void)endDataViewUpdatesForHelper:(id)helper;
- (_Bool)dataViewWillUpdateForHelper:(id)helper type:(long long)type;
- (void)dataViewDidUpdateForHelper:(id)helper type:(long long)type animated:(_Bool)animated;
- (unsigned long long)dataViewHelper:(id)helper sectionBreaksForIndexPath:(id)path;
- (_Bool)accessibilityPerformMagicTap;
- (id)tfn_calculatedLayoutMetricsForItemAtIndexPath:(id)path;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)_tfn_checkDisableScrollIfContentFits;

@end

#endif /* TFNTableView_h */
