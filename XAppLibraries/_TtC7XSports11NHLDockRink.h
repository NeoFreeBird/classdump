//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports11NHLDockRink_h
#define _TtC7XSports11NHLDockRink_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.HockeyRinkView, XSports.SportsGameScoreboardLastPlay _$scSg ->;

@interface XSports.NHLDockRink : XSports.MeasurableView { // (Swift)
    /* instance variables */
    XSports.SportsGameScoreboardLastPlay _$scSg -> onPresentLastPlay;
    XSports.HockeyRinkView rinkView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports11NHLDockRink_h */
