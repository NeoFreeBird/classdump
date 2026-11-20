//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUITwitterUserContext_h
#define TUITwitterUserContext_h
@import Foundation;

@class NSDictionary, NSObject, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface TUITwitterUserContext : NSObject

@property (readonly, nonatomic) long long userID;
@property (readonly, nonatomic) _Bool promoted;
@property (readonly, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (readonly, nonatomic) NSDictionary *scribeItem;
@property (readonly, nonatomic) NSDictionary *tweetScribeItem;

/* class methods */
+ (id)userContextWithReferenceOnly:(id)only;

/* instance methods */
- (id)init;
- (id)initWithUserID:(long long)id promotedContent:(id)content scribeItem:(id)item tweetScribeItem:(id)item;
- (_Bool)isPromoted;

@end

#endif /* TUITwitterUserContext_h */
