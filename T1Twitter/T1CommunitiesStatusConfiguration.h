//
#ifndef T1CommunitiesStatusConfiguration_h
#define T1CommunitiesStatusConfiguration_h
@import Foundation;

@class NSObject;

@interface T1CommunitiesStatusConfiguration : NSObject

/* class methods */
+ (_Bool)canShowCommunityAvatarForStatusViewModel:(id)model account:(id)account;
+ (_Bool)showCommunityAvatarEverywhere;
+ (_Bool)showCommunitiesConversationBarEverywhere;
+ (_Bool)canShowCommunityConversationForStatusViewModel:(id)model account:(id)account;

@end

#endif /* T1CommunitiesStatusConfiguration_h */
