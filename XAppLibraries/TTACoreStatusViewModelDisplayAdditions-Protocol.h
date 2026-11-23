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
