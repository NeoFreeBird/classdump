//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNItemsDataViewControllerBackingStore_h
#define TFNItemsDataViewControllerBackingStore_h
@import Foundation;

#include "TFNItemsDataViewAdapterRegistry.h"
#include "TFNItemsDataViewBackingStore-Protocol.h"
#include "TFNItemsDataViewController.h"

@class NSArray, NSMutableArray, NSObject, NSSet, NSString;

@interface TFNItemsDataViewControllerBackingStore : NSObject <TFNItemsDataViewBackingStore> {
    /* instance variables */
    NSMutableArray *_itemsBySection;
    NSMutableArray *_dataViewItemsBySection;
    TFNItemsDataViewController *_dataViewController;
    NSSet *_cachedAllSectionControllers;
    long long _batchAnimation;
    long long _batchCount;
    NSMutableArray *_batchedItemUpdates;
    NSMutableArray *_batchedItemDeletes;
    NSMutableArray *_batchedItemInserts;
    NSMutableArray *_batchedSectionUpdates;
    NSMutableArray *_batchedSectionDeletes;
    NSMutableArray *_batchedSectionInserts;
}

@property (readonly, nonatomic) TFNItemsDataViewAdapterRegistry *adapterRegistry;
@property (retain, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDataViewController:(id)controller;
- (void)insertItem:(id)item atIndexPath:(id)path withRowAnimation:(long long)animation;
- (void)deleteItemAtIndexPath:(id)path withRowAnimation:(long long)animation;
- (void)updateItem:(id)item atIndexPath:(id)path withRowAnimation:(long long)animation;
- (void)moveItemAtIndexPath:(id)path toIndexPath:(id)path;
- (void)insertSection:(id)section atIndex:(long long)index withRowAnimation:(long long)animation;
- (void)deleteSectionAtIndex:(long long)index withRowAnimation:(long long)animation;
- (void)updateSection:(id)section atIndex:(long long)index withRowAnimation:(long long)animation;
- (void)performBatchUpdates:(id /* block */)updates completion:(id /* block */)completion;
- (void)_tfn_updateBatchAnimation:(long long)animation;
- (void)_tfn_performBatchUpdatesWithAnimation:(long long)animation completion:(id /* block */)completion;
- (_Bool)_tfn_performBatchItemUpdates:(id)updates itemDeletes:(id)deletes itemInserts:(id)inserts sectionUpdates:(id)updates sectionDeletes:(id)deletes sectionInserts:(id)inserts withAnimation:(long long)animation completion:(id /* block */)completion;
- (void)_tfn_insertSection:(id)section atIndex:(long long)index;
- (void)_tfn_deleteSectionAtIndex:(long long)index;
- (void)_tfn_updateSectionAtIndex:(long long)index withSection:(id)section;
- (void)_tfn_insertItem:(id)item atIndexPath:(id)path;
- (void)_tfn_deleteItemAtIndexPath:(id)path;
- (void)_tfn_updateItem:(id)item atIndexPath:(id)path;
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
- (void)_setupAdapterForDataViewItem:(id)item withFallbackSectionController:(id)controller;
- (void)_fillDataViewItems:(id)items items:(id)items forItems:(id)items;
- (void)_tfn_updateSectionControllers;

@end

#endif /* TFNItemsDataViewControllerBackingStore_h */
