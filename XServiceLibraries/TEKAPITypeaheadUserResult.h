//
#ifndef TEKAPITypeaheadUserResult_h
#define TEKAPITypeaheadUserResult_h
@import Foundation;

@class NSObject, NSString;

@interface TEKAPITypeaheadUserResult : NSObject

@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSString *profileImageURLString;
@property (readonly, nonatomic) unsigned long long score;
@property (readonly, nonatomic) _Bool verified;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithUsername:(id)username fullName:(id)name profileImageURLString:(id)urlstring score:(unsigned long long)score verified:(_Bool)verified;

@end

#endif /* TEKAPITypeaheadUserResult_h */
