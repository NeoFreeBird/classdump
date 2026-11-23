//
#ifndef _TtC13XDesignSystem15BlurRadiusLayer_h
#define _TtC13XDesignSystem15BlurRadiusLayer_h
@import Foundation;

@class CALayer, _$s12CoreGraphics7CGFloatVMn _$scSg ->;

@interface XDesignSystem.BlurRadiusLayer : CALayer { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> onDisplay;
}

@property (nonatomic) double blurRadius;

/* class methods */
+ (_Bool)needsDisplayForKey:(id)key;

/* instance methods */
- (id)actionForKey:(id)key;
- (void)display;
- (id)init;
- (id)initWithLayer:(id)layer;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC13XDesignSystem15BlurRadiusLayer_h */
