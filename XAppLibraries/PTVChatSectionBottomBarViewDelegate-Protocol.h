//
#ifndef PTVChatSectionBottomBarViewDelegate_Protocol_h
#define PTVChatSectionBottomBarViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatSectionBottomBarViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)chatSectionBottomBarViewDidSelectWatchLive:(id)live;
- (void)chatSectionBottomBarViewDidSelectPlayPause:(id)pause;
- (void)chatSectionBottomBarViewDidSelectShowOverflowMenu:(id)menu;
- (void)chatSectionBottomBarViewDidSelectToggleRetweetBroadcast:(id)broadcast;
- (void)chatSectionBottomBarViewDidSelectToggleCallInButton:(id)button;
- (void)chatSectionBottomBarViewDidSelectAudioScopeButton:(id)button;
- (void)chatSectionBottomBarViewDidSelectShareBroadcast:(id)broadcast;
- (void)chatSectionBottomBarViewDidSelectGiftHeartActionItem:(id)item;
- (void)chatSectionBottomBarViewDidSelectComposeMessage:(id)message;
- (void)chatSectionBottomBarViewDidBeginComposingMessage:(id)message;
- (void)chatSectionBottomBarViewDidEndComposingMessage:(id)message;
- (void)chatSectionBottomBarViewDidChangeMessage:(id)message;
- (void)chatSectionBottomBarView:(id)view didSelectSendMessage:(id)message keyboardLanguage:(id)language;
- (_Bool)chatSectionBottomBarViewShouldHideOverflowMenu:(id)menu;

@end

#endif /* PTVChatSectionBottomBarViewDelegate_Protocol_h */
