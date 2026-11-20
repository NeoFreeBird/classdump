//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEntitySet_h
#define TFSTwitterEntitySet_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterEntityURLProvider-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterEntitySet : NSObject <TFSTwitterEntityURLProvider, NSCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) NSArray *media;
@property (nonatomic, readonly) NSArray *linkURLs;
@property (nonatomic, readonly) NSArray *mentions;
@property (nonatomic, readonly) NSArray *hashtags;
@property (nonatomic, readonly) NSArray *symbols;
@property (nonatomic, readonly) NSArray *smarttags;
@property (nonatomic, readonly) NSArray *timestamps;
@property (nonatomic, readonly) NSArray *allEntities;
@property (nonatomic, readonly) NSArray *urls;
@property (nonatomic, readonly) _Bool hasMentionsOrHashtagsOrSymbols;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* class methods */
+ (id)sanitizedTextRangesWithTextRanges:(id)ranges validRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;

/* instance methods */
- (id)initWithURLs:(id)urls mentions:(id)mentions hashtags:(id)hashtags symbols:(id)symbols timestamps:(id)timestamps;
- (id)init;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (_Bool)hasMentionedUserWithUserID:(long long)id;
- (id)entitySetBySanitizingEntitiesWithValidRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)entitySetByRemovingMentionedUserWithUserIDs:(id)ids;
- (id)entitySetByRemovingTaggedUserWithUserID:(long long)id;
- (id)entitySetByUpdatingEntityMediaWithMediaIDToAltTextDictionary:(id)dictionary;
- (id)entitySetByUpdatingOriginalDisplayURLWithExpandedURL;
- (id)updatingRangesToStringIndexesFor:(id)_for;
- (id)entityForURL:(id)url;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFSTwitterEntitySet_h */
