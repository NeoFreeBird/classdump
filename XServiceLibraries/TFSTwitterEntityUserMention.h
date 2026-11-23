//
#ifndef TFSTwitterEntityUserMention_h
#define TFSTwitterEntityUserMention_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSTwitterTextRange-Protocol.h"
#include "TFSTwitterUserReference.h"

@class NSObject, NSString;

@interface TFSTwitterEntityUserMention : NSObject <NSCoding, TFSTwitterTextRange> // (Swift)

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) TFSTwitterUserReference *userReference;
@property (nonatomic, readonly) TFSTwitterUserReference *profileNavigationUserReference;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range userID:(long long)id username:(id)username fullName:(id)name;
- (_Bool)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)init;

@end

#endif /* TFSTwitterEntityUserMention_h */
