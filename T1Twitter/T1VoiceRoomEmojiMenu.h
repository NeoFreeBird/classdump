//
#ifndef T1VoiceRoomEmojiMenu_h
#define T1VoiceRoomEmojiMenu_h
@import Foundation;

@class NSObject;

@interface T1VoiceRoomEmojiMenu : NSObject

/* class methods */
+ (void)presentWithTitle:(id)title sections:(id)sections sourceView:(id)view inViewController:(id)controller presentBlock:(id /* block */)block dismissBlock:(id /* block */)block;

@end

#endif /* T1VoiceRoomEmojiMenu_h */
