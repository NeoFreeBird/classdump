//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12MarkdownView5Theme_h
#define _TtC12MarkdownView5Theme_h
@import Foundation;

@class _$s12CoreGraphics7CGFloatVMn, _$sSDySSSD -> _$ss11AnyHashableVMn _$syXlGGSg, _$sSDySSSDyS2SGGSg, _$sSS, _$sSSSg, _$sSo6UIFontCSg, _$sSo7UIColorCSg, _TtCs12_SwiftObject;

@interface MarkdownView.Theme : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String theme;
    Swift.String? lightTheme;
    __C.UIFont? codeFont;
    __C.UIFont? boldCodeFont;
    __C.UIFont? italicCodeFont;
    __C.UIColor? themeBackgroundColour;
    nominal type descriptor for CoreGraphics.CGFloat lineSpacing;
    nominal type descriptor for CoreGraphics.CGFloat paraSpacing;
    Swift.Dictionary empty-list Swift.StringSwift.Dictionary -> nominal type descriptor for Swift.AnyHashable _$syXlGGSg themeDict;
    [Swift.String : [Swift.String : Swift.String]]? strippedTheme;
}

@end

#endif /* _TtC12MarkdownView5Theme_h */
