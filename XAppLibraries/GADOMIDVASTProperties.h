//
#ifndef GADOMIDVASTProperties_h
#define GADOMIDVASTProperties_h
@import Foundation;

@class NSObject;

@interface GADOMIDVASTProperties : NSObject

@property (readonly, nonatomic) _Bool skippable;
@property (readonly, nonatomic) double skipOffset;
@property (readonly, nonatomic) _Bool autoPlay;
@property (readonly, nonatomic) unsigned long long position;

/* instance methods */
- (id)initWithSkipOffset:(double)offset autoPlay:(_Bool)play position:(unsigned long long)position;
- (id)initWithAutoPlay:(_Bool)play position:(unsigned long long)position;
- (id)initWithSkippable:(_Bool)skippable skipOffset:(double)offset autoPlay:(_Bool)play position:(unsigned long long)position;
- (id)toJSON;
- (id)positionString;
- (_Bool)isSkippable;
- (_Bool)isAutoPlay;

@end

#endif /* GADOMIDVASTProperties_h */
