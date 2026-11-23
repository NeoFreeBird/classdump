//
#ifndef T1CameraCapturePresentation_h
#define T1CameraCapturePresentation_h
@import Foundation;

@class NSObject, TFSTwitterScribeContext;

@interface T1CameraCapturePresentation : NSObject

@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) unsigned long long preferredCameraPosition;
@property (readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext;

/* instance methods */
- (id)init;
- (id)initWithMode:(unsigned long long)mode preferredCameraPosition:(unsigned long long)position scribeContext:(id)context;
- (id)description;

@end

#endif /* T1CameraCapturePresentation_h */
