//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
