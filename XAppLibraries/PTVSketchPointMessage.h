//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVSketchPointMessage_h
#define PTVSketchPointMessage_h
@import Foundation;

@class NSObject;

@interface PTVSketchPointMessage : NSObject

@property (nonatomic) struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } point;
@property (nonatomic) double time;

@end

#endif /* PTVSketchPointMessage_h */
