//
#ifndef OCFRichTextExpander_Protocol_h
#define OCFRichTextExpander_Protocol_h
@import Foundation;

@protocol OCFRichTextExpander

@required

/* required instance methods */
- (id)expandRichText:(id)text withSubtaskDataProvider:(id)provider;

@optional

@end

#endif /* OCFRichTextExpander_Protocol_h */
