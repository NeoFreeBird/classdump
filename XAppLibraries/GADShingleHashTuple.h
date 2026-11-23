//
#ifndef GADShingleHashTuple_h
#define GADShingleHashTuple_h
@import Foundation;

@class NSArray, NSObject;

@interface GADShingleHashTuple : NSObject

@property (readonly, nonatomic) NSArray *shingle;
@property (readonly, nonatomic) unsigned long long hashValue;

/* instance methods */
- (id)initWithShingle:(id)shingle hashValue:(unsigned long long)value;

@end

#endif /* GADShingleHashTuple_h */
