//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK23LinkableTextDisplayView_h
#define _TtC10JetfuelSDK23LinkableTextDisplayView_h
@import Foundation;

#include "_TtC10JetfuelSDK15TextDisplayView.h"

@class _$s10Foundation3URLVMn _$s_ -> __C.CGRect _$stcSg;

@interface JetfuelSDK.LinkableTextDisplayView : JetfuelSDK.TextDisplayView { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL  first-element-marker  -> __C.CGRect _$stcSg linkHandler;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)handleTap:(id)tap;

@end

#endif /* _TtC10JetfuelSDK23LinkableTextDisplayView_h */
