//
#ifndef T1URLProtocolDefaultHandlerAction_h
#define T1URLProtocolDefaultHandlerAction_h
@import Foundation;

@class NSArray, NSObject, NSString, TNLParameterCollection;

@interface T1URLProtocolDefaultHandlerAction : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSArray *pathComponents;
@property (readonly, copy, nonatomic) TNLParameterCollection *arguments;

/* class methods */
+ (id)actionWithProtocolHandlerURL:(id)url;
+ (void)_t1_expandArgumentAliases:(id)aliases;

/* instance methods */
- (id)initWithProtocolHandlerURL:(id)url;

@end

#endif /* T1URLProtocolDefaultHandlerAction_h */
