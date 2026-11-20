//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
