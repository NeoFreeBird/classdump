//
#ifndef T1CameraPlaces_h
#define T1CameraPlaces_h
@import Foundation;

@class NSArray, NSObject, TFSTwitterLocation, TFSTwitterPlace;

@interface T1CameraPlaces : NSObject

@property (readonly, nonatomic) TFSTwitterLocation *targetLocation;
@property (readonly, copy, nonatomic) NSArray *places;
@property (readonly, copy, nonatomic) NSArray *attributions;
@property (readonly, nonatomic) TFSTwitterPlace *defaultPlace;

/* instance methods */
- (id)init;
- (id)initWithTargetLocation:(id)location places:(id)places attributions:(id)attributions defaultPlace:(id)place;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)description;

@end

#endif /* T1CameraPlaces_h */
