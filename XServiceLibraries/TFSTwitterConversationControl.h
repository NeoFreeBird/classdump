//
#ifndef TFSTwitterConversationControl_h
#define TFSTwitterConversationControl_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterConversationControl : NSObject <NSCoding, NSCopying> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 conversationControlTypes;
}

@property (nonatomic, readonly) NSString *conversationOwner;
@property (nonatomic, readonly) NSArray *allowedCountryCodes;
@property (nonatomic, readonly) long long conversationControlType;
@property (nonatomic, readonly) NSArray *conversationControlTypeValues;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithConversationControlType:(long long)type conversationOwner:(id)owner allowedCountryCodes:(id)codes;
- (id)initWithConversationControlTypeValues:(id)values conversationOwner:(id)owner allowedCountryCodes:(id)codes;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterConversationControl_h */
