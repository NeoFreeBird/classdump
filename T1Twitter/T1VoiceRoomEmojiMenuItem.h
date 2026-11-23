//
#ifndef T1VoiceRoomEmojiMenuItem_h
#define T1VoiceRoomEmojiMenuItem_h
@import Foundation;

@class NSObject, NSString;

@interface T1VoiceRoomEmojiMenuItem : NSObject

@property (readonly, nonatomic) NSString *emoji;
@property (readonly, nonatomic) _Bool selected;
@property (readonly, nonatomic) id /* block */ presentBlock;
@property (readonly, nonatomic) id /* block */ actionBlock;

/* instance methods */
- (id)init;
- (id)initWithEmoji:(id)emoji selected:(_Bool)selected presentBlock:(id /* block */)block actionBlock:(id /* block */)block;
- (_Bool)isSelected;

@end

#endif /* T1VoiceRoomEmojiMenuItem_h */
