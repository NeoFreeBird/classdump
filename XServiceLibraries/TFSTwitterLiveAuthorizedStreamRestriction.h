//
#ifndef TFSTwitterLiveAuthorizedStreamRestriction_h
#define TFSTwitterLiveAuthorizedStreamRestriction_h
@import Foundation;

@class NSObject;

@interface TFSTwitterLiveAuthorizedStreamRestriction : NSObject

@property (readonly, nonatomic) long long restrictionType;

/* instance methods */
- (id)init;
- (id)initWithRestrictionType:(long long)type;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFSTwitterLiveAuthorizedStreamRestriction_h */
