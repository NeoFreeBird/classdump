//
#ifndef T1VoiceRoomSetupSwitchTableViewCell_h
#define T1VoiceRoomSetupSwitchTableViewCell_h
@import Foundation;

@class UISwitch, UITableViewCell;

@interface T1VoiceRoomSetupSwitchTableViewCell : UITableViewCell

@property (retain, nonatomic) UISwitch *switchView;

/* instance methods */
- (id)initWithTitle:(id)title subtitle:(id)subtitle;

@end

#endif /* T1VoiceRoomSetupSwitchTableViewCell_h */
