//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTACoreStatusViewModelDisplayAdditions_Protocol_h
#define TTACoreStatusViewModelDisplayAdditions_Protocol_h
@import Foundation;

@protocol TTACoreStatusViewModelDisplayAdditions

@required

@property (nonatomic, readonly) _Bool hasNonConversationSocialText;
@property (nonatomic, readonly) _Bool hasConversationSocialText;
@property (nonatomic, readonly) _Bool hasSocialContextBannerText;

/* required instance methods */
- (id)tappableSocialContext;
- (id)conversationSocialText;
- (id)socialContextUserReferences;

@optional

@end

#endif /* TTACoreStatusViewModelDisplayAdditions_Protocol_h */
