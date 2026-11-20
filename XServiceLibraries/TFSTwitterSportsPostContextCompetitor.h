//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterSportsPostContextCompetitor_h
#define TFSTwitterSportsPostContextCompetitor_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterSportsPostContextCompetitor : NSObject // (Swift)

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *abbreviation;
@property (nonatomic, readonly) NSString *score;
@property (nonatomic, readonly) NSString *logoURL;
@property (nonatomic, readonly) NSString *darkLogoURL;
@property (nonatomic, readonly) NSString *color;
@property (nonatomic, readonly) _Bool isActive;
@property (nonatomic, readonly) _Bool isWinner;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterSportsPostContextCompetitor_h */
