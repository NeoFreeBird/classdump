//
#ifndef TFNFlexibleSpaceItem_h
#define TFNFlexibleSpaceItem_h
@import Foundation;

@class NSNumber, NSObject;

@interface TFNFlexibleSpaceItem : NSObject

@property (retain, nonatomic) NSNumber *previousHeight;
@property (nonatomic) double minimumHeight;
@property (nonatomic) double weight;
@property (nonatomic) double pinHeightWithin;

/* instance methods */
- (id)init;
- (id)initWithMinimumHeight:(double)height weight:(double)weight;

@end

#endif /* TFNFlexibleSpaceItem_h */
