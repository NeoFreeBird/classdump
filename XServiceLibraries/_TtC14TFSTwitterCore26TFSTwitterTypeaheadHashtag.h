//
#ifndef _TtC14TFSTwitterCore26TFSTwitterTypeaheadHashtag_h
#define _TtC14TFSTwitterCore26TFSTwitterTypeaheadHashtag_h
@import Foundation;

@class NSObject, NSString, _$sSS, _$sSi;

@interface TFSTwitterCore.TFSTwitterTypeaheadHashtag : NSObject // (Swift)

@property (nonatomic, readonly) NSString *hashtag;
@property (nonatomic, readonly) long long score;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithHashtag:(id)hashtag score:(long long)score;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore26TFSTwitterTypeaheadHashtag_h */
