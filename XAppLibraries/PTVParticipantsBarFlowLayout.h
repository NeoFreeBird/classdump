//
#ifndef PTVParticipantsBarFlowLayout_h
#define PTVParticipantsBarFlowLayout_h
@import Foundation;

@class NSArray, UICollectionViewFlowLayout;

@interface PTVParticipantsBarFlowLayout : UICollectionViewFlowLayout

@property (copy, nonatomic) NSArray *updateItems;

/* class methods */
+ (Class)layoutAttributesClass;

/* instance methods */
- (void)prepareForCollectionViewUpdates:(id)updates;
- (void)finalizeCollectionViewUpdates;
- (_Bool)isItemBeingInsertedAtIndexPath:(id)path;
- (_Bool)isItemBeingDeletedAtIndexPath:(id)path;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)path;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)path;
- (void)applyOffscreenItemAttributes:(id)attributes;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)kind;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)kind;

@end

#endif /* PTVParticipantsBarFlowLayout_h */
