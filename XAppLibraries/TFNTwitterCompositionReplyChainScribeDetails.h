//
#ifndef TFNTwitterCompositionReplyChainScribeDetails_h
#define TFNTwitterCompositionReplyChainScribeDetails_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSDictionary, NSObject;

@interface TFNTwitterCompositionReplyChainScribeDetails : NSObject <NSCoding>

@property (readonly, nonatomic) _Bool thread;
@property (readonly, nonatomic) _Bool reply;
@property (readonly, nonatomic) unsigned long long photoCount;
@property (readonly, nonatomic) unsigned long long videoCount;
@property (readonly, nonatomic) unsigned long long pollCount;
@property (readonly, nonatomic) unsigned long long GIFCount;
@property (readonly, nonatomic) unsigned long long replyChainTotalCount;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (readonly, copy, nonatomic) NSDictionary *scribeParameters;

/* instance methods */
- (id)init;
- (id)initWithThread:(_Bool)thread reply:(_Bool)reply photoCount:(unsigned long long)count videoCount:(unsigned long long)count pollCount:(unsigned long long)count GIFCount:(unsigned long long)gifcount replyChainTotalCount:(unsigned long long)count;
- (id)initWithComposition:(id)composition;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isThread;
- (_Bool)isReply;

@end

#endif /* TFNTwitterCompositionReplyChainScribeDetails_h */
