//
#ifndef T1CameraCaptureCameraScribeValue_h
#define T1CameraCaptureCameraScribeValue_h
@import Foundation;

@class NSObject;

@interface T1CameraCaptureCameraScribeValue : NSObject

@property (readonly, nonatomic) unsigned long long position;
@property (readonly, nonatomic) long long flashMode;
@property (readonly, nonatomic) long long orientation;

/* instance methods */
- (id)init;
- (id)initWithPosition:(unsigned long long)position flashMode:(long long)mode orientation:(long long)orientation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;

@end

#endif /* T1CameraCaptureCameraScribeValue_h */
