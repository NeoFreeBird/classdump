//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVContextualMenuAction_h
#define PTVContextualMenuAction_h
@import Foundation;

@class NSObject, NSString;

@interface PTVContextualMenuAction : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) id /* block */ handler;

/* class methods */
+ (id)actionWithTitle:(id)title style:(unsigned long long)style handler:(id /* block */)handler;

/* instance methods */
- (id)initWithTitle:(id)title style:(unsigned long long)style handler:(id /* block */)handler;

@end

#endif /* PTVContextualMenuAction_h */
