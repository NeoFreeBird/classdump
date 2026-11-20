//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNPromptTextSpec_OCFUI_h
#define TFNPromptTextSpec_OCFUI_h
@import Foundation;

@interface TFNPromptTextSpec (OCFUI)

/* class methods */
+ (id)textSpecForRichText:(id)text navigationLinkHandler:(id)handler subtaskDataProvider:(id)provider textAlignment:(long long)alignment defaultFont:(id)font;
+ (id)textSpecForExpandedRichText:(id)text navigationLinkHandler:(id)handler textAlignment:(long long)alignment defaultFont:(id)font;

@end

#endif /* TFNPromptTextSpec_OCFUI_h */
