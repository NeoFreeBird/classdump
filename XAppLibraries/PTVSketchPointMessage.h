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
