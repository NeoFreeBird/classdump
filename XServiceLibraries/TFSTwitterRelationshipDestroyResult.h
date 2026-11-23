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
