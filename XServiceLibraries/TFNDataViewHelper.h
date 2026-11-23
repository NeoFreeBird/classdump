//
#ifndef TFNDataViewHelper_h
#define TFNDataViewHelper_h
@import Foundation;

#include "TFNDataView-Protocol.h"
#include "TFNDataViewHelperDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSObject, UIScrollView;

@interface TFNDataViewHelper : NSObject {
    /* instance variables */
    UIScrollView<TFNDataView> *_dataView;
    NSMutableDictionary *_cellLayoutsByIdentifier;
    NSMutableDictionary *_registeredReuseIdentifiers;
    NSMutableDictionary *_sectionUpdates;
    _Bool _reloadData;
}

@property (nonatomic) long long batchCount;
@property (readonly, nonatomic) NSMutableArray *cellLayouts;
@property (readonly, nonatomic) NSMutableIndexSet *deleteCellLayoutSections;
@property (readonly, nonatomic) NSMutableIndexSet *insertCellLayoutSections;
@property (readonly, nonatomic) NSMutableIndexSet *reloadCellLayoutSections;
@property (nonatomic) _Bool updateAnimated;
@property (weak, nonatomic) id <TFNDataViewHelperDelegate> delegate;

/* instance methods */
- (id)initWithDataView:(id)view;
- (id)cellLayoutForIndexPath:(id)path;
- (void)setCellLayout:(id)layout forIndexPath:(id)path;
- (id)cellLayoutForObjectIdentifier:(id)identifier;
- (void)setCellLayout:(id)layout forObjectIdentifier:(id)identifier;
- (long long)invalidateCellLayoutsPassingTest:(id /* block */)test;
- (id)_cellLayoutsForSection:(long long)section create:(_Bool)create;
- (void)beginUpdates;
- (void)endUpdates;
- (long long)_updateType;
- (void)performBatchUpdates:(id /* block */)updates completion:(id /* block */)completion;
- (void)_performBatchUpdates:(id /* block */)updates;
- (void)insertItemsAtIndexPaths:(id)paths animated:(_Bool)animated withBlock:(id /* block */)block;
- (void)deleteItemsAtIndexPaths:(id)paths animated:(_Bool)animated withBlock:(id /* block */)block;
- (void)reloadItemsAtIndexPaths:(id)paths animated:(_Bool)animated withBlock:(id /* block */)block;
- (void)moveItemAtIndexPath:(id)path toIndexPath:(id)path withBlock:(id /* block */)block;
- (void)insertSections:(id)sections animated:(_Bool)animated withBlock:(id /* block */)block;
- (void)deleteSections:(id)sections animated:(_Bool)animated withBlock:(id /* block */)block;
- (void)reloadSections:(id)sections animated:(_Bool)animated withBlock:(id /* block */)block;
- (void)moveSection:(long long)section toSection:(long long)section withBlock:(id /* block */)block;
- (void)reloadDataWithBlock:(id /* block */)block;
- (id)_sectionUpdatesForSection:(long long)section;
- (void)_willApplyUpdates:(_Bool)updates;
- (void)_didApplyUpdates;
- (Class)registeredClassForCellWithReuseIdentifier:(id)identifier;
- (void)setRegisteredClass:(Class)_class forCellWithReuseIdentifier:(id)identifier;
- (Class)registeredClassForSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)identifier;
- (void)setRegisteredClass:(Class)_class forSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)identifier;

@end

#endif /* TFNDataViewHelper_h */
