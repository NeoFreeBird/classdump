//
#ifndef PTVParticipantsBarViewLayoutAttributes_h
#define PTVParticipantsBarViewLayoutAttributes_h
@import Foundation;

@class UICollectionViewLayoutAttributes;

@interface PTVParticipantsBarViewLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) _Bool avatarViewHidden;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;

@end

#endif /* PTVParticipantsBarViewLayoutAttributes_h */
