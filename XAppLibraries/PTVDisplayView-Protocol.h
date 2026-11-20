//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVDisplayView_Protocol_h
#define PTVDisplayView_Protocol_h
@import Foundation;

@protocol PTVDisplayView

@required

@property (nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoRect;

@optional

@end

#endif /* PTVDisplayView_Protocol_h */
