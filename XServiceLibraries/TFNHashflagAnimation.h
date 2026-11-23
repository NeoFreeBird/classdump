//
#ifndef TFNHashflagAnimation_h
#define TFNHashflagAnimation_h
@import Foundation;

@class NSObject, NSString, NSURL;

@interface TFNHashflagAnimation : NSObject

@property (readonly, copy, nonatomic) NSString *animationViewContext;
@property (readonly, copy, nonatomic) NSURL *assetURL;
@property (readonly, nonatomic) long long priority;

/* instance methods */
- (id)initWithAnimationViewContext:(id)context assetURL:(id)url priority:(long long)priority;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFNHashflagAnimation_h */
