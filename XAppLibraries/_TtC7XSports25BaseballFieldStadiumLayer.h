//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports25BaseballFieldStadiumLayer_h
#define _TtC7XSports25BaseballFieldStadiumLayer_h
@import Foundation;

@class CALayer, XSports.BaseballFieldFit, XSports.BaseballFieldPalette, XSports.BaseballParkDistances ?, _$sSo7UIColorC;

@interface XSports.BaseballFieldStadiumLayer : CALayer { // (Swift)
    /* instance variables */
    XSports.BaseballFieldFit fit;
    XSports.BaseballFieldPalette palette;
    __C.UIColor thirdBaseAccent;
    __C.UIColor firstBaseAccent;
    XSports.BaseballParkDistances ? wallDistances;
}

/* instance methods */
- (void)drawInContext:(struct CGContext *)context;
- (id)init;
- (id)initWithLayer:(id)layer;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC7XSports25BaseballFieldStadiumLayer_h */
