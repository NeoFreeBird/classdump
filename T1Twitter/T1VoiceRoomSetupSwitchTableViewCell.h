//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
