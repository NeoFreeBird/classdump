//
#ifndef TFSTwitterUserWhyToFollow_h
#define TFSTwitterUserWhyToFollow_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterUserWhyToFollow : NSObject

@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) NSString *interest;
@property (readonly, nonatomic) _Bool showUserBio;
@property (readonly, nonatomic) _Bool checked;

/* class methods */
+ (unsigned long long)reasonForContext:(id)context;

/* instance methods */
- (id)initWithReason:(unsigned long long)reason interest:(id)interest showUserBio:(_Bool)bio checked:(_Bool)checked;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* TFSTwitterUserWhyToFollow_h */
