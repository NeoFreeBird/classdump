//
#ifndef TFSTwitterFoundMediaResult_h
#define TFSTwitterFoundMediaResult_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterFoundMediaGroup.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterFoundMediaResult : NSObject <NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSArray *groups;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSString *nextCursor;
@property (readonly, copy, nonatomic) NSString *previousCursor;
@property (readonly, nonatomic) TFSTwitterFoundMediaGroup *group;
@property (readonly, copy, nonatomic) NSArray *objects;

/* instance methods */
- (id)init;
- (id)initWithGroups:(id)groups items:(id)items nextCursor:(id)cursor previousCursor:(id)cursor group:(id)group;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)initWithJSONDictionary:(id)jsondictionary group:(id)group;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFSTwitterFoundMediaResult_h */
