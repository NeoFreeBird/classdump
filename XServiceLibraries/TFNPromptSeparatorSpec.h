//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNPromptSeparatorSpec_h
#define TFNPromptSeparatorSpec_h
@import Foundation;

@class NSObject, NSString;

@interface TFNPromptSeparatorSpec : NSObject

@property (readonly, nonatomic) NSString *text;

/* instance methods */
- (id)initWithText:(id)text;
- (id)separatorView;

@end

#endif /* TFNPromptSeparatorSpec_h */
