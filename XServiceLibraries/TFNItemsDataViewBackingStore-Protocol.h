//
#ifndef TFNItemsDataViewBackingStore_Protocol_h
#define TFNItemsDataViewBackingStore_Protocol_h
@import Foundation;

#include "TFNItemsDataViewAdapterRegistry.h"
#include "TFNItemsDataViewAssociation-Protocol.h"

@class NSArray;

@protocol TFNItemsDataViewBackingStore <TFNItemsDataViewAssociation>

@required

@property (readonly, nonatomic) TFNItemsDataViewAdapterRegistry *adapterRegistry;
@property (retain, nonatomic) NSArray *sections;

/* required instance methods */
- (void)insertItem:(id)item atIndexPath:(id)path withRowAnimation:(long long)animation;
- (void)deleteItemAtIndexPath:(id)path withRowAnimation:(long long)animation;
- (void)updateItem:(id)item atIndexPath:(id)path withRowAnimation:(long long)animation;
- (void)moveItemAtIndexPath:(id)path toIndexPath:(id)path;
- (void)insertSection:(id)section atIndex:(long long)index withRowAnimation:(long long)animation;
- (void)deleteSectionAtIndex:(long long)index withRowAnimation:(long long)animation;
- (void)updateSection:(id)section atIndex:(long long)index withRowAnimation:(long long)animation;
- (void)performBatchUpdates:(id /* block */)updates completion:(id /* block */)completion;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)section;
- (_Bool)isValidIndexPath:(id)path;
- (id)dataViewItemAtValidIndexPath:(id)path;
- (void)enumerateItemsUsingBlock:(id /* block */)block;
- (void)enumerateDataViewItemsUsingBlock:(id /* block */)block;
- (id)sectionControllers;

@optional

/* optional instance methods */
- (void)dataViewDidLoad;
- (void)reconfigureCellsForItemsAtIndexPaths:(id)paths withRowAnimation:(long long)animation;
- (void)reloadCellsForItemsAtIndexPaths:(id)paths withRowAnimation:(long long)animation;
- (void)updateSections:(id)sections withRowAnimation:(long long)animation completion:(id /* block */)completion;
- (void)updateSections:(id)sections reconfigureItemIdentifiers:(id)identifiers withRowAnimation:(long long)animation completion:(id /* block */)completion;

@end

#endif /* TFNItemsDataViewBackingStore_Protocol_h */
