//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSMutableString_TFSHTMLEntity_h
#define NSMutableString_TFSHTMLEntity_h
@import Foundation;

@interface NSMutableString (TFSHTMLEntity)

/* instance methods */
- (void)tfs_replaceTemplateVariablesWithBlock:(id /* block */)block;
- (void)tfs_replaceTemplateVariablesWithDictionary:(id)dictionary;
- (id)tfs_unescapeHTMLEntitiesAdjustingTextRanges:(id)ranges;

@end

#endif /* NSMutableString_TFSHTMLEntity_h */
