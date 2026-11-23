//
#ifndef TFNPromptContentViewSpec_h
#define TFNPromptContentViewSpec_h
@import Foundation;

@class NSObject, UIView;

@interface TFNPromptContentViewSpec : NSObject

@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) id /* block */ sizeCalculator;
@property (readonly, nonatomic) id /* block */ registerSizeObserver;
@property (readonly, nonatomic) _Bool viewIncludesContentEdgeInsets;

/* instance methods */
- (id)initWithView:(id)view viewIncludesContentEdgeInsets:(_Bool)insets sizeCalculator:(id /* block */)calculator registerSizeObserver:(id /* block */)observer;

@end

#endif /* TFNPromptContentViewSpec_h */
