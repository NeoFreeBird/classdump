//
#ifndef T1VoiceRoomMenuActionItemCell_h
#define T1VoiceRoomMenuActionItemCell_h
@import Foundation;

#include "T1VoiceRoomMenuCell.h"
#include "TFNActionItem-Protocol.h"

@class UIImageView, UILabel;

@interface T1VoiceRoomMenuActionItemCell : T1VoiceRoomMenuCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) id <TFNActionItem> actionItem;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)setSelected:(_Bool)selected animated:(_Bool)animated;

@end

#endif /* T1VoiceRoomMenuActionItemCell_h */
