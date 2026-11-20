//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNItemsDataViewDiffableDataSourceBackingStore_h
#define TFNItemsDataViewDiffableDataSourceBackingStore_h
@import Foundation;

#include "TFNItemsDataViewAdapterRegistry.h"
#include "TFNItemsDataViewBackingStore-Protocol.h"
#include "TFNItemsDataViewController.h"
#include "TFNItemsDataViewSnapshot.h"

@class NSArray, NSObject, NSSet, NSString, UICollectionViewDiffableDataSource, UITableViewDiffableDataSource;

@interface TFNItemsDataViewDiffableDataSourceBackingStore : NSObject <TFNItemsDataViewBackingStore> {
    /* instance variables */
    TFNItemsDataViewController *_dataViewController;
    NSArray *_sectionIdentifiers;
    NSArray *_itemsBySection;
    NSArray *_dataViewItemsBySection;
    NSSet *_cachedAllSectionControllers;
    UITableViewDiffableDataSource *_tableDataSource;
    UICollectionViewDiffableDataSource *_collectionDataSource;
    TFNItemsDataViewSnapshot *_batchSnapshot;
}

@property (readonly, nonatomic) TFNItemsDataViewAdapterRegistry *adapterRegistry;
@property (retain, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDataViewController:(id)controller;
- (void)dataViewDidLoad;
- (void)updateSections:(id)sections withRowAnimation:(long long)animation completion:(id /* block */)completion;
- (void)updateSections:(id)sections reconfigureItemIdentifiers:(id)identifiers withRowAnimation:(long long)animation completion:(id /* block */)completion;
- (void)insertItem:(id)item atIndexPath:(id)path withRowAnimation:(long long)animation;
- (void)deleteItemAtIndexPath:(id)path withRowAnimation:(long long)animation;
- (void)updateItem:(id)item atIndexPath:(id)path withRowAnimation:(long long)animation;
- (void)reconfigureCellsForItemsAtIndexPaths:(id)paths withRowAnimation:(long long)animation;
- (void)reloadCellsForItemsAtIndexPaths:(id)paths withRowAnimation:(long long)animation;
- (void)moveItemAtIndexPath:(id)path toIndexPath:(id)path;
- (void)insertSection:(id)section atIndex:(long long)index withRowAnimation:(long long)animation;
- (void)_tfn_insertSection:(id)section atIndex:(long long)index;
- (void)deleteSectionAtIndex:(long long)index withRowAnimation:(long long)animation;
- (void)_tfn_deleteSectionWithIdentifier:(id)identifier atIndex:(long long)index;
- (void)updateSection:(id)section atIndex:(long long)index withRowAnimation:(long long)animation;
- (void)performBatchUpdates:(id /* block */)updates completion:(id /* block */)completion;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)section;
- (_Bool)isValidIndexPath:(id)path;
- (id)dataViewItemAtValidIndexPath:(id)path;
- (void)enumerateItemsUsingBlock:(id /* block */)block;
- (void)enumerateDataViewItemsUsingBlock:(id /* block */)block;
- (id)sectionControllers;
- (id)indexPathForItem:(id)item;
- (id)indexPathForObjectIdentifier:(id)identifier;
- (id)itemAtIndexPath:(id)path;
- (id)scrollPositionIdentifierForElementAtIndexPath:(id)path inView:(id)view;
- (id)indexPathForElementWithScrollPositionIdentifier:(id)identifier inView:(id)view;
- (void)useDataViewAdapter:(id)adapter forItemsOfClass:(Class)_class;
- (id)registeredDataViewAdapterForItem:(id)item;
- (id)_tfn_dataSource;
- (void)_tfn_initTableDataSource;
- (void)_tfn_initCollectionDataSource;
- (_Bool)_tfn_initBatchSnapshot;
- (_Bool)_initOrReplaceBatchSnapshotWithSections:(id)sections reconfigureItemIdentifiers:(id)identifiers;
- (void)_tfn_updateBatchSnapshotAnimation:(long long)animation;
- (void)_tfn_applyBatchSnapshot:(id /* block */)snapshot;
- (void)_tfn_applySnapshot:(id)snapshot completion:(id /* block */)completion;
- (id)_tfn_snapshotSections:(id)sections reconfigureItemIdentifiers:(id)identifiers;
- (void)_tfn_syncSectionsWithSnapshot:(id)snapshot;
- (void)_tfn_setupStateForDataViewItem:(id)item withFallbackSectionController:(id)controller;
- (void)_tfn_updateSectionControllers;
- (void)_tfn_handleDuplicateObjectIdentifier:(id)identifier;

@end

#endif /* TFNItemsDataViewDiffableDataSourceBackingStore_h */
