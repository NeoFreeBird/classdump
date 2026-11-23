//
#ifndef TFNModuleFooter_h
#define TFNModuleFooter_h
@import Foundation;

@class NSObject, NSString;

@interface TFNModuleFooter : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) id /* block */ actionBlock;

/* instance methods */
- (id)initWithText:(id)text actionBlock:(id /* block */)block;
- (id)init;

@end

#endif /* TFNModuleFooter_h */
