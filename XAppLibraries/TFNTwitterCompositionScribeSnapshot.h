//
#ifndef TFNTwitterCompositionScribeSnapshot_h
#define TFNTwitterCompositionScribeSnapshot_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSObject, NSString;

@interface TFNTwitterCompositionScribeSnapshot : NSObject <NSSecureCoding>

@property (copy, nonatomic) NSData *textDigest;
@property (nonatomic) _Bool hasPoll;
@property (nonatomic) _Bool isScheduled;
@property (nonatomic) _Bool hasLocation;
@property (nonatomic) _Bool isQuote;
@property (nonatomic) _Bool isLongform;
@property (nonatomic) _Bool hasDisclosure;
@property (copy, nonatomic) NSString *audience;
@property (nonatomic) long long conversationControlType;
@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSArray *excludedReplyUserIDs;
@property (readonly, nonatomic) unsigned long long compositionCount;
@property (readonly, nonatomic) unsigned long long textLength;
@property (readonly, nonatomic) unsigned long long imageCount;
@property (readonly, nonatomic) unsigned long long gifCount;
@property (readonly, nonatomic) unsigned long long videoCount;
@property (readonly, nonatomic) unsigned long long altTextCount;
@property (readonly, nonatomic) unsigned long long mediaCount;
@property (readonly, copy, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) _Bool isReply;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCompositions:(id)compositions accountID:(id)id;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)changesSinceSnapshot:(id)snapshot;
- (id)eventInfo;

@end

#endif /* TFNTwitterCompositionScribeSnapshot_h */
