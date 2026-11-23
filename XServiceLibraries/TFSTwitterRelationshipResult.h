//
#ifndef TFSTwitterRelationshipResult_h
#define TFSTwitterRelationshipResult_h
@import Foundation;

#include "TFSTwitterRelationship.h"

@class NSObject, NSString;

@interface TFSTwitterRelationshipResult : NSObject // (Swift)

@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) TFSTwitterRelationship *relationship;

/* instance methods */
- (id)initWithUserID:(long long)id username:(id)username relationship:(id)relationship;
- (id)init;

@end

#endif /* TFSTwitterRelationshipResult_h */
