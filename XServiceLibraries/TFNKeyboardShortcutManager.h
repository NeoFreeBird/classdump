//
#ifndef TFNKeyboardShortcutManager_h
#define TFNKeyboardShortcutManager_h
@import Foundation;

#include "TFNKeyboardShortcutDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString, UIKeyCommand;

@interface TFNKeyboardShortcutManager : NSObject <TFNKeyboardShortcutDelegate> {
    /* instance variables */
    NSMutableArray *_keyCommandArray;
}

@property (readonly, nonatomic) UIKeyCommand *selectKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *backKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *backArrowKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *forwardKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *closeKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *escapeKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *refreshKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *previousTabKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *nextTabKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *previousKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *nextKeyCommand;
@property (readonly, copy, nonatomic) NSArray *pageUpKeyCommands;
@property (readonly, copy, nonatomic) NSArray *pageDownKeyCommands;
@property (readonly, nonatomic) UIKeyCommand *lineUpKeyCommand;
@property (readonly, nonatomic) UIKeyCommand *lineDownKeyCommand;
@property (readonly, copy, nonatomic) NSArray *topKeyCommands;
@property (readonly, copy, nonatomic) NSArray *bottomKeyCommands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (void)setSharedInstanceFactoryBlock:(id /* block */)block;

/* instance methods */
- (id)init;
- (id)keyCommandWithInput:(id)input modifierFlags:(long long)flags action:(SEL)action;
- (id)keyCommandWithInput:(id)input modifierFlags:(long long)flags action:(SEL)action title:(id)title;
- (id)keyCommandWithInput:(id)input modifierFlags:(long long)flags action:(SEL)action title:(id)title alternates:(id)alternates;
- (id)_tfn_keyCommandWithInput:(id)input modifierFlags:(long long)flags action:(SEL)action title:(id)title alternates:(id)alternates;
- (void)removeKeyCommand:(id)command;
- (_Bool)isKeyboardVisibleViewController:(id)controller;
- (id)availableKeyCommandsForResponder:(id)responder;

@end

#endif /* TFNKeyboardShortcutManager_h */
