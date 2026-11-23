//
#ifndef T1CameraPlace_h
#define T1CameraPlace_h
@import Foundation;

@class CLLocation, NSObject, TFSTwitterLocation, TFSTwitterPlace;

@interface T1CameraPlace : NSObject

@property (readonly, nonatomic) TFSTwitterPlace *place;
@property (readonly, nonatomic) TFSTwitterLocation *location;
@property (readonly, nonatomic) CLLocation *backingLocation;

/* instance methods */
- (id)init;
- (id)initWithPlace:(id)place;
- (id)initWithPlace:(id)place location:(id)location;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)description;

@end

#endif /* T1CameraPlace_h */
