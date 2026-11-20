//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat39AVChatGroupCallShowMoreLayoutAttributes_h
#define _TtC6AVChat39AVChatGroupCallShowMoreLayoutAttributes_h
@import Foundation;

@class Chat.AVChatParticipantListCell.ListPositionStyle, UICollectionViewLayoutAttributes;

@interface AVChat.AVChatGroupCallShowMoreLayoutAttributes : UICollectionViewLayoutAttributes { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatParticipantListCell.ListPositionStyle listPositionStyle;
}

/* instance methods */
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC6AVChat39AVChatGroupCallShowMoreLayoutAttributes_h */
