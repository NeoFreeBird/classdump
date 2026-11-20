//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSFeatureSwitchesFacet_h
#define TFSFeatureSwitchesFacet_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TFSFeatureSwitchesFacet : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *desc;
@property (readonly, nonatomic) NSString *owner;
@property (readonly, nonatomic) _Bool requiresRestart;
@property (readonly, nonatomic) _Bool supportsAccessibility;
@property (readonly, nonatomic) NSArray *parameters;

/* class methods */
+ (id)facetWithDictionary:(id)dictionary;

/* instance methods */
- (id)initWithName:(id)name description:(id)description owner:(id)owner requiresRestart:(_Bool)restart supportsAccessibility:(_Bool)accessibility parameters:(id)parameters;

@end

#endif /* TFSFeatureSwitchesFacet_h */
