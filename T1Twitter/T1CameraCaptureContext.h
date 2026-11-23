//
#ifndef T1CameraCaptureContext_h
#define T1CameraCaptureContext_h
@import Foundation;

@class NSObject;

@interface T1CameraCaptureContext : NSObject

@property (readonly, nonatomic) unsigned long long host;
@property (readonly, nonatomic) unsigned long long availableModes;
@property (readonly, nonatomic) unsigned long long alwaysHiddenControls;
@property (readonly, nonatomic) _Bool autosavePhotoOutputToLibrary;

/* instance methods */
- (id)init;
- (id)initWithHost:(unsigned long long)host availableModes:(unsigned long long)modes alwaysHiddenControls:(unsigned long long)controls autosavePhotoOutputToLibrary:(_Bool)library;

@end

#endif /* T1CameraCaptureContext_h */
