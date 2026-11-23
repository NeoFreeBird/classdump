//
#ifndef _TtC14TwitterUISwift19UserListItemFactory_h
#define _TtC14TwitterUISwift19UserListItemFactory_h
@import Foundation;

@class TwitterUISwift.UserBadger, _$s10TFNUISwift20BadgesImageGeneratorCMn, _$sSD -> _$ss11AnyHashableVMn _$sSo18TUIAvatarImageViewC, _$sShySa -> TwitterUISwift.UserBadge, _$sSo16TIPImagePipelineCSg, _$syycSg, _TtCs12_SwiftObject;

@interface TwitterUISwift.UserListItemFactory : Swift._SwiftObject { // (Swift)
    /* instance variables */
    (() -> ())? onBadgesLoaded;
    __C.TIPImagePipeline? imagePipeline;
    TwitterUISwift.UserBadger badger;
    nominal type descriptor for TFNUISwift.BadgesImageGenerator badgesGenerator;
    Swift.Dictionary -> nominal type descriptor for Swift.AnyHashable __C.TUIAvatarImageView avatarViewsByID;
    Swift.Set empty-list Swift.Array -> TwitterUISwift.UserBadge requestedBadgeSets;
}

@end

#endif /* _TtC14TwitterUISwift19UserListItemFactory_h */
