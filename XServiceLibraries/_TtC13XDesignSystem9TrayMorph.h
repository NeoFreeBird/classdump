//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem9TrayMorph_h
#define _TtC13XDesignSystem9TrayMorph_h
@import Foundation;

@class XDesignSystem.ContainerMorphClone ?, XDesignSystem.CrossfadeMorphElement ?, _$s12CoreGraphics7CGFloatVMn ?, _$sSo6UIViewCSgXw, _TtCs12_SwiftObject;

@interface XDesignSystem.TrayMorph : Swift._SwiftObject { // (Swift)
    /* instance variables */
    weak __C.UIView? sourceContainer;
    weak __C.UIView? sourceTitle;
    weak __C.UIView? sourcePrimaryAction;
    nominal type descriptor for CoreGraphics.CGFloat ? cornerRadius;
    XDesignSystem.ContainerMorphClone ? containerClone;
    XDesignSystem.CrossfadeMorphElement ? titleElement;
    XDesignSystem.CrossfadeMorphElement ? primaryActionElement;
}

@end

#endif /* _TtC13XDesignSystem9TrayMorph_h */
