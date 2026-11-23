//
#ifndef TWAAnimation_h
#define TWAAnimation_h
@import Foundation;

@class NSObject;

@interface TWAAnimation : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 composition;
    B24@0:8@"NSString"16 compositionHashValue;
}

@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)animationWithName:(id)name error:(id *)error;
+ (id)animationWithName:(id)name cache:(id)cache bundle:(id)bundle error:(id *)error;

/* instance methods */
- (id)initWithData:(id)data error:(id *)error;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TWAAnimation_h */
