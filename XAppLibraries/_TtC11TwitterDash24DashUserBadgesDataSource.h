//
#ifndef _TtC11TwitterDash24DashUserBadgesDataSource_h
#define _TtC11TwitterDash24DashUserBadgesDataSource_h
@import Foundation;

@class TwitterDash.DashUser, _$s10TFNUISwift25BadgesImageGeneratorTokenCMn ?, _$s7Combine9PublishedVMn _$sSo7UIImageCSg, _TtCs12_SwiftObject;

@interface TwitterDash.DashUserBadgesDataSource : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterDash.DashUser user;
    nominal type descriptor for TFNUISwift.BadgesImageGeneratorToken ? imageGeneratorToken;
    nominal type descriptor for Combine.Published __C.UIImage? _generatedBadgesImage;
}

/* instance methods */
- (void)generateImages;

@end

#endif /* _TtC11TwitterDash24DashUserBadgesDataSource_h */
