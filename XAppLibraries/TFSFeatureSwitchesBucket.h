//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
