//
#ifndef T1ShareSheetBuilder_h
#define T1ShareSheetBuilder_h
@import Foundation;

@class NSObject;

@interface T1ShareSheetBuilder : NSObject // (Swift)

/* class methods */
+ (id)buildXChatShareSheetWithAccount:(id)account link:(id)link shareable:(id)shareable status:(id)status actionItems:(id)items useAlternateBackgroundColor:(_Bool)color didDismissBlock:(id /* block */)block;
+ (id)buildShareSheetWithCustomActions:(id)actions inAppActions:(id)actions offPlatformActions:(id)actions account:(id)account link:(id)link shareable:(id)shareable status:(id)status useAlternateBackgroundColor:(_Bool)color didDismissBlock:(id /* block */)block;
+ (id)buildShareSheetWithCustomActions:(id)actions inAppActions:(id)actions offPlatformActions:(id)actions account:(id)account link:(id)link shareable:(id)shareable status:(id)status previewProvider:(id)provider actionItems:(id)items useAlternateBackgroundColor:(_Bool)color didDismissBlock:(id /* block */)block;

/* instance methods */
- (id)init;

@end

#endif /* T1ShareSheetBuilder_h */
