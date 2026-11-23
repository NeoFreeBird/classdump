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
