//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSettingsDescriptionItem_ONBRichText_h
#define TFNSettingsDescriptionItem_ONBRichText_h
@import Foundation;

@interface TFNSettingsDescriptionItem (ONBRichText)

/* class methods */
+ (id)private_callsToActionsForEntities:(id)entities navigationLinkActionBlock:(id /* block */)block;

/* instance methods */
- (id)initWithText:(id)text entities:(id)entities navigationLinkActionBlock:(id /* block */)block;

@end

#endif /* TFNSettingsDescriptionItem_ONBRichText_h */
