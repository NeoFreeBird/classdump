//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRelationshipDestroyResult_h
#define TFSTwitterRelationshipDestroyResult_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterRelationshipDestroyResult : NSObject

@property (readonly, nonatomic) long long userID;
@property (readonly, nonatomic) NSString *screenName;
@property (readonly, nonatomic) _Bool success;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterRelationshipDestroyResult_h */
