//
#ifndef TFSTwitterUserReference_h
#define TFSTwitterUserReference_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSNumber, NSObject, NSString;

@interface TFSTwitterUserReference : NSObject <TFSTwitterCore.TFSTwitterScribableItem, NSSecureCoding> // (Swift)

@property (nonatomic, readonly) NSString *scribeItemImpressionID;
@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic, readonly) NSDictionary *scribeParameters;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) NSNumber *userIDNumber;
@property (nonatomic, readonly) NSString *displayUsername;
@property (nonatomic, readonly) NSString *displayFullName;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (void)setSupportsSecureCoding:(_Bool)coding;

/* instance methods */
- (id)scribeParametersWithProfileID:(_Bool)id scribeItem:(_Bool)item;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithUserID:(long long)id username:(id)username;
- (id)initWithUserID:(long long)id;
- (id)initWithUsername:(id)username;
- (id)initWithUserID:(long long)id username:(id)username fullName:(id)name;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterUserReference_h */
