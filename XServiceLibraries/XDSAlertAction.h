//
#ifndef XDSAlertAction_h
#define XDSAlertAction_h
@import Foundation;

@class NSObject;

@interface XDSAlertAction : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 action;
}

/* instance methods */
- (id)initWithTitle:(id)title style:(long long)style handler:(id /* block */)handler;
- (id)initWithTitle:(id)title style:(long long)style restoresKeyboard:(_Bool)keyboard handler:(id /* block */)handler;
- (id)initWithTitle:(id)title style:(long long)style role:(long long)role restoresKeyboard:(_Bool)keyboard handler:(id /* block */)handler;
- (id)init;

@end

#endif /* XDSAlertAction_h */
