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
