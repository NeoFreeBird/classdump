//
#ifndef TFNDataViewAdditions_Protocol_h
#define TFNDataViewAdditions_Protocol_h
@import Foundation;

@class NSIndexPath;

@protocol TFNDataViewAdditions

@required

@property (readonly, nonatomic) NSIndexPath *tfn_firstIndexPath;
@property (readonly, nonatomic) NSIndexPath *tfn_lastIndexPath;

/* required instance methods */
- (id)tfn_gateIndexPath:(id)path;
- (long long)tfn_absolutePositionOfIndexPath:(id)path;
- (_Bool)tfn_isValid:(id)valid;

@optional

@end

#endif /* TFNDataViewAdditions_Protocol_h */
