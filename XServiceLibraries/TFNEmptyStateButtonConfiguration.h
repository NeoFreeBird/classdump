//
#ifndef TFNEmptyStateButtonConfiguration_h
#define TFNEmptyStateButtonConfiguration_h
@import Foundation;

@class NSObject, NSString;

@interface TFNEmptyStateButtonConfiguration : NSObject // (Swift)

@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long style;
@property (nonatomic) long long sizeClass;
@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, copy) id /* block */ stringFetchClosure;
@property (nonatomic) _Bool hasKnownInvalidText;

/* instance methods */
- (id)initWithTitle:(id)title action:(id /* block */)action;
- (id)initWithTitle:(id)title style:(long long)style action:(id /* block */)action;
- (id)initWithStyle:(long long)style sizeClass:(long long)_class stringFetchClosure:(id /* block */)closure action:(id /* block */)action;
- (id)init;

@end

#endif /* TFNEmptyStateButtonConfiguration_h */
