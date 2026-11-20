//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatSectionMessageComposerViewDelegate_Protocol_h
#define PTVChatSectionMessageComposerViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatSectionMessageComposerViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)chatSectionMessageComposerViewDidSelectComposeMessage:(id)message;
- (void)chatSectionMessageComposerViewDidBeginComposingMessage:(id)message;
- (void)chatSectionMessageComposerViewDidChangeMessage:(id)message;
- (void)chatSectionMessageComposerViewDidEndComposingMessage:(id)message;
- (void)chatSectionMessageComposerView:(id)view didSelectSendMessage:(id)message keyboardLanguage:(id)language;

@end

#endif /* PTVChatSectionMessageComposerViewDelegate_Protocol_h */
