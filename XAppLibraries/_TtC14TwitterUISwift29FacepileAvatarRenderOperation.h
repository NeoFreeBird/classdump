//
#ifndef _TtC14TwitterUISwift29FacepileAvatarRenderOperation_h
#define _TtC14TwitterUISwift29FacepileAvatarRenderOperation_h
@import Foundation;

@class NSOperation, Swift.Bool, TwitterUISwift.FacepileAvatarRenderOperation.Style, _$sSo17TIPImageContainerCSg, _$sySo7UIImageCSgc;

@interface TwitterUISwift.FacepileAvatarRenderOperation : NSOperation { // (Swift)
    /* instance variables */
    TwitterUISwift.FacepileAvatarRenderOperation.Style style;
    (__C.UIImage?) -> () callback;
    Swift.Bool avatarFailedToLoad;
    __C.TIPImageContainer? user1Avatar;
    __C.TIPImageContainer? user2Avatar;
    __C.TIPImageContainer? user3Avatar;
}

/* instance methods */
- (void)main;
- (id)init;

@end

#endif /* _TtC14TwitterUISwift29FacepileAvatarRenderOperation_h */
