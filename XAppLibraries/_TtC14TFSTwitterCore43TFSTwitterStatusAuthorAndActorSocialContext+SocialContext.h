//
#ifndef _TtC14TFSTwitterCore43TFSTwitterStatusAuthorAndActorSocialContext_SocialContext_h
#define _TtC14TFSTwitterCore43TFSTwitterStatusAuthorAndActorSocialContext_SocialContext_h
@import Foundation;

@interface TFSTwitterCore.TFSTwitterStatusAuthorAndActorSocialContext (SocialContext) <TFNTwitterStatusSocialContext>

/* instance methods */
- (_Bool)isInReplyToSocialContextType;
- (long long)_primarySocialContextType;
- (id)_primaryRelatedUserDisplayFullName;
- (id)bannerText;
- (id)linkText;
- (id)activityName;
- (id)_primaryUserReference;
- (id)allUserReferences;
- (id)activityTitle;
- (id)activityPage;
- (long long)contextType;
- (id)landingURL;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* _TtC14TFSTwitterCore43TFSTwitterStatusAuthorAndActorSocialContext_SocialContext_h */
