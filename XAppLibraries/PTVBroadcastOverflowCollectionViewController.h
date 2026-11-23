//
#ifndef PTVBroadcastOverflowCollectionViewController_h
#define PTVBroadcastOverflowCollectionViewController_h
@import Foundation;

#include "PTVBroadcastOverflowScrollViewController.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, UICollectionView;

@interface PTVBroadcastOverflowCollectionViewController : PTVBroadcastOverflowScrollViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)scrollViewForContainerView;
- (void)viewDidLoad;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;

@end

#endif /* PTVBroadcastOverflowCollectionViewController_h */
