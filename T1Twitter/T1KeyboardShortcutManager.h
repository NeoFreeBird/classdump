//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1KeyboardShortcutManager_h
#define T1KeyboardShortcutManager_h
@import Foundation;

@class NSArray, TFNKeyboardShortcutManager, UIKeyCommand;

@interface T1KeyboardShortcutManager : TFNKeyboardShortcutManager {
    /* instance variables */
    UIKeyCommand *_increaseTextSizeCmdPlusKeyCommand;
    UIKeyCommand *_increaseTextSizeCmdEqualKeyCommand;
}

@property (readonly, nonatomic) UIKeyCommand *darkModeKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *defaultTextSizeKeyCommand;
@property (readonly, nonatomic) NSArray *increaseTextSizeKeyCommands;
@property (readonly, nonatomic) UIKeyCommand *decreaseTextSizeKeyCommand;
@property (readonly, nonatomic) NSArray *panelKeyCommands;
@property (readonly, nonatomic) UIKeyCommand *dashKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *settingsKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *searchKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *composeTweetKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *sendTweetKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *composeMessageKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *replyToMessageKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *sendMessageKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *replyKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *retweetKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *undoRetweetKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *likeKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *undoLikeKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *bookmarkKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *undoBookmarkKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *viewUserKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *openMediaKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *openQuotedTweetKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *openURLKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *tweetTextCopyKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *tweetLinkCopyKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *accountListKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *nextAccountKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *previousAccountKeyCommand;

/* class methods */
+ (SEL)actionForExpandingButtonItemCategory:(unsigned long long)category;

/* instance methods */
- (id)init;
- (_Bool)isKeyboardVisibleViewController:(id)controller;
- (void)updatePanelKeyCommandsWithPanelIDs:(id)ids account:(id)account;

@end

#endif /* T1KeyboardShortcutManager_h */
