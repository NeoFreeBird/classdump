//
#ifndef MTKViewDelegate_Protocol_h
#define MTKViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol MTKViewDelegate <NSObject>

@required

/* required instance methods */
- (void)mtkView:(id)view drawableSizeWillChange:(struct CGSize { double x0; double x1; })change;
- (void)drawInMTKView:(id)mtkview;
- (void)drawInMTKView:(id)mtkview;

@optional

@end

#endif /* MTKViewDelegate_Protocol_h */
