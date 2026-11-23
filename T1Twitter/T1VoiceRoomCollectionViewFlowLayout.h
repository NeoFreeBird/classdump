//
#ifndef T1VoiceRoomCollectionViewFlowLayout_h
#define T1VoiceRoomCollectionViewFlowLayout_h
@import Foundation;

#include "TASSpaceModel-Protocol.h"

@class NSArray, UICollectionViewFlowLayout, UICollectionViewLayoutAttributes;

@interface T1VoiceRoomCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (retain, nonatomic) NSArray *cachedAttributes;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *headerAttributes;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *footerAttributes;
@property (retain, nonatomic) id <TASSpaceModel> spaceModel;

/* instance methods */
- (id)init;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })_t1_collectionViewItemSize;
- (unsigned long long)_t1_numberOfColumnsInCollectionView;
- (struct CGSize { double x0; double x1; })_t1_collectionViewParticipantsFooterReferenceSize;

@end

#endif /* T1VoiceRoomCollectionViewFlowLayout_h */
