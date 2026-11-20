//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9GlassDock24DockTapGestureRecognizer_h
#define _TtC9GlassDock24DockTapGestureRecognizer_h
@import Foundation;

@class UITapGestureRecognizer;

@interface GlassDock.DockTapGestureRecognizer : UITapGestureRecognizer // (Swift)

/* instance methods */
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (id)initWithTarget:(id)target action:(SEL)action;

@end

#endif /* _TtC9GlassDock24DockTapGestureRecognizer_h */
