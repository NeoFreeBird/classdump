//
#ifndef TFSTwitterMutedKeyword_h
#define TFSTwitterMutedKeyword_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDate, NSObject, NSString;

@interface TFSTwitterMutedKeyword : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *keywordID;
@property (readonly, copy, nonatomic) NSString *keywordString;
@property (readonly, nonatomic) unsigned long long muteSurfaces;
@property (readonly, nonatomic) unsigned long long muteOptions;
@property (readonly, nonatomic) NSDate *validUntilDate;
@property (readonly, nonatomic) double duration;

/* instance methods */
- (id)init;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)initWithKeywordID:(id)id keyword:(id)keyword muteSurfaces:(unsigned long long)surfaces muteOptions:(unsigned long long)options duration:(double)duration;
- (id)createAPIDictionary;
- (id)updateAPIDictionary;
- (id)private_sharedAPIDictionary;
- (id)configurationDictionary;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSTwitterMutedKeyword_h */
