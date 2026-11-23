//
#ifndef T1MenuBarBuilder_h
#define T1MenuBarBuilder_h
@import Foundation;

#include "T1KeyboardShortcutManager.h"

@class NSObject;

@interface T1MenuBarBuilder : NSObject {
    /* instance variables */
    T1KeyboardShortcutManager *_keyboardShortcutManager;
}

/* class methods */
+ (id)sharedInstance;
+ (id)_t1_commandWithKeyCommand:(id)command action:(SEL)action;
+ (void)validateCompoundCommand:(id)command;
+ (long long)canPerformCompoundAction:(SEL)action withSender:(id)sender;
+ (id)_t1_canPerformCompoundAction:(SEL)action withSender:(id)sender;
+ (id)_t1_canResponderChainHandleAction:(SEL)action orAction:(SEL)action withSender:(id)sender;

/* instance methods */
- (id)init;
- (void)buildMenuWithBuilder:(id)builder;
- (void)_t1_removeMenusWithBuilder:(id)builder;
- (void)_t1_buildApplicationMenuWithBuilder:(id)builder;
- (void)_t1_buildFileMenuWithBuilder:(id)builder;
- (void)_t1_buildEditMenuWithBuilder:(id)builder;
- (void)_t1_buildViewMenuWithBuilder:(id)builder;
- (void)_t1_buildTweetMenuWithBuilder:(id)builder;
- (void)_t1_buildMessageMenuWithBuilder:(id)builder;
- (void)_t1_buildAccountsMenuWithBuilder:(id)builder;
- (void)_t1_buildWindowMenuWithBuilder:(id)builder;
- (void)_t1_buildHelpMenuWithBuilder:(id)builder;
- (void)handleLikeOrUndoLikeCommand;
- (void)handleRetweetOrUndoRetweetCommand;
- (void)handleBookmarkOrUndoBookmarkCommand;
- (void)_t1_useResponderChainToHandleAction:(SEL)action orAction:(SEL)action;

@end

#endif /* T1MenuBarBuilder_h */
