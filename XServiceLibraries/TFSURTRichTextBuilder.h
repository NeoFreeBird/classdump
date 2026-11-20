//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSURTRichTextBuilder_h
#define TFSURTRichTextBuilder_h
@import Foundation;

@class NSObject;

@interface TFSURTRichTextBuilder : NSObject // (Swift)

/* instance methods */
- (id)build:(id)build error:(id *)error;
- (id)init;

@end

#endif /* TFSURTRichTextBuilder_h */
