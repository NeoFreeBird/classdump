//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XNavigation16TabBarPortalView_h
#define _TtC11XNavigation16TabBarPortalView_h
@import Foundation;

@class UIView, _$sSo12CAShapeLayerC, _$sSo6UIViewCSgXw;

@interface XNavigation.TabBarPortalView : UIView { // (Swift)
    /* instance variables */
    __C.CAShapeLayer windowLayer;
    __C.CAShapeLayer punchLayer;
    weak __C.UIView? punchedRow;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XNavigation16TabBarPortalView_h */
