//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
