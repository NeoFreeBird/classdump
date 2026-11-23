//
#ifndef _TtC6AVChat25AVChatParticipantGridCell_h
#define _TtC6AVChat25AVChatParticipantGridCell_h
@import Foundation;

@class Chat.AVChatParticipantGridCellViewModel ?, Chat.AVChatParticipantGridLayoutAttributes ?, Chat.AVChatParticipantView, NSString, UICollectionViewCell, _$sSo6UIViewCSg;

@interface AVChat.AVChatParticipantGridCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatParticipantView _participantView;
    oneway _Atomic Chat.AVChatParticipantGridCellViewModel ? _currentViewModel;
    __C.UIView? _pipTransitionPlaceholderView;
    oneway _Atomic Chat.AVChatParticipantGridLayoutAttributes ? _lastAppliedGridLayoutAttributes;
}

@property (nonatomic, readonly) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)attributes;

@end

#endif /* _TtC6AVChat25AVChatParticipantGridCell_h */
