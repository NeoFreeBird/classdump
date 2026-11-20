//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRelationshipCreateResult_h
#define TFSTwitterRelationshipCreateResult_h
@import Foundation;

@class NSObject;

@interface TFSTwitterRelationshipCreateResult : NSObject

@property (readonly, nonatomic) long long userID;
@property (readonly, nonatomic) _Bool protectedFollowRequest;
@property (readonly, nonatomic) _Bool blocking;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterRelationshipCreateResult_h */
