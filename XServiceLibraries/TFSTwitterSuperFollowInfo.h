//
#ifndef TFSTwitterSuperFollowInfo_h
#define TFSTwitterSuperFollowInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterArticle.h"

@class NSObject, NSString;

@interface TFSTwitterSuperFollowInfo : NSObject <NSCopying, NSCoding> // (Swift)

@property (nonatomic, readonly) NSString *creatorName;
@property (nonatomic, readonly) NSString *conversationUserName;
@property (nonatomic, readonly) _Bool isExclusiveTweet;
@property (nonatomic, readonly) NSString *exclusiveTweetCreatorName;
@property (nonatomic, readonly) NSString *subscribeCTATitle;
@property (nonatomic, readonly) NSString *subscribeCTAURL;
@property (nonatomic, readonly) _Bool isPreviewTweet;
@property (nonatomic, readonly) _Bool isPreviewReply;
@property (nonatomic, retain) TFSTwitterArticle *articlePreview;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)initWithCreatorName:(id)name conversationUserName:(id)name subscribeCTATitle:(id)ctatitle subscribeCTAURL:(id)ctaurl isPreviewReply:(_Bool)reply articlePreview:(id)preview;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterSuperFollowInfo_h */
