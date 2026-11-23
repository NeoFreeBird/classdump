//
#ifndef TFSFeatureSwitchesBucket_h
#define TFSFeatureSwitchesBucket_h
@import Foundation;

@class NSObject, NSString;

@interface TFSFeatureSwitchesBucket : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long offset;

/* class methods */
+ (id)bucketWithDictionary:(id)dictionary;

/* instance methods */
- (id)initWithName:(id)name offset:(long long)offset;

@end

#endif /* TFSFeatureSwitchesBucket_h */
