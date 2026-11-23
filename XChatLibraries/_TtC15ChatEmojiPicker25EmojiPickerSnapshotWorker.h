//
#ifndef _TtC15ChatEmojiPicker25EmojiPickerSnapshotWorker_h
#define _TtC15ChatEmojiPicker25EmojiPickerSnapshotWorker_h
@import Foundation;

@class ChatEmojiPicker.EmojiPickerConfiguration, ChatEmojiPicker.EmojiPickerDataStream, ChatEmojiPicker.EmojiPickerSearchStream, ChatEmojiPicker.EmojiPickerSnapshotStream, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatEmojiPicker.EmojiPickerSnapshotWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatEmojiPicker.EmojiPickerConfiguration configuration;
    ChatEmojiPicker.EmojiPickerDataStream emojiPickerDataStream;
    ChatEmojiPicker.EmojiPickerSearchStream emojiPickerSearchStream;
    ChatEmojiPicker.EmojiPickerSnapshotStream emojiPickerSnapshotStream;
    DispatchQueue queue;
}

@end

#endif /* _TtC15ChatEmojiPicker25EmojiPickerSnapshotWorker_h */
