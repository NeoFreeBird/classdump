//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
