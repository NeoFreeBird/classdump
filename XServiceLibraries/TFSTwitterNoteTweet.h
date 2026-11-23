//
#ifndef TFSTwitterNoteTweet_h
#define TFSTwitterNoteTweet_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterEntitySet.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterNoteTweet : NSObject <NSCopying, NSCoding> // (Swift)

@property (nonatomic, readonly) NSString *restId;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) _Bool isExpandable;
@property (nonatomic, readonly) TFSTwitterEntitySet *entitySet;
@property (nonatomic, readonly) NSArray *richTextTags;
@property (nonatomic, readonly) NSArray *inlineMedia;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithRestId:(id)id text:(id)text isExpandable:(_Bool)expandable entitySet:(id)set richTextTags:(id)tags inlineMedia:(id)media;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterNoteTweet_h */
