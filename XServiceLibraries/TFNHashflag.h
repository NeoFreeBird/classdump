//
#ifndef TFNHashflag_h
#define TFNHashflag_h
@import Foundation;

@class NSArray, NSObject, NSString, NSURL;

@interface TFNHashflag : NSObject

@property (readonly, copy, nonatomic) NSString *hashtag;
@property (readonly, copy, nonatomic) NSURL *imageURL;
@property (readonly, copy, nonatomic) NSArray *animations;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) _Bool isHashfettiEnabled;

/* class methods */
+ (id)placeholder;

/* instance methods */
- (id)initWithHashtag:(id)hashtag imageURL:(id)url animations:(id)animations startTime:(double)time endTime:(double)time isHashfettiEnabled:(_Bool)enabled;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (_Bool)isActiveOnDate:(id)date;
- (id)highestPriorityAnimationForAnimationViewContext:(id)context;

@end

#endif /* TFNHashflag_h */
