//
#ifndef _TtC11XLiveChatUI22LiveChatBottomFollower_h
#define _TtC11XLiveChatUI22LiveChatBottomFollower_h
@import Foundation;

@class XLiveChatUI.LiveChatFollowSpring, _$sSdSg, _$sSo13CADisplayLinkCSg, _$sySdc, _TtCs12_SwiftObject;

@interface XLiveChatUI.LiveChatBottomFollower : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.CADisplayLink? displayLink;
    Swift.Double? lastTickTimestamp;
    XLiveChatUI.LiveChatFollowSpring spring;
    (Swift.Double) -> () onTick;
}

@end

#endif /* _TtC11XLiveChatUI22LiveChatBottomFollower_h */
