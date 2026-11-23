//
#ifndef ONBWrappingFormatter_h
#define ONBWrappingFormatter_h
@import Foundation;

@class NSFormatter, NSObject;

@interface ONBWrappingFormatter : NSObject

@property (retain, nonatomic) NSFormatter *wrappedFormatter;

/* class methods */
+ (id)formatterWithWrappedFormatter:(id)formatter;

/* instance methods */
- (_Bool)respondsToSelector:(SEL)selector;
- (_Bool)conformsToProtocol:(id)protocol;
- (id)forwardingTargetForSelector:(SEL)selector;

@end

#endif /* ONBWrappingFormatter_h */
